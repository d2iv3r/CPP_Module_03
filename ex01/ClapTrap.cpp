/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:22:22 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/26 15:14:38 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called!" << std::endl;
    Name = "...";
    EnergyPoint = 10;
    HitPoint = 10;
    AttackDamage = 0;
};

ClapTrap::ClapTrap(std::string n)
{
    Name = n;
    std::cout << "ClapTrap " << Name << " param Constructor called!" << std::endl;
    EnergyPoint = 10;
    HitPoint = 10;
    AttackDamage = 0;
};

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " Destructor called!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    std::cout << "ClapTrap Copy constructor called!" << std::endl;
    *this = cpy;
};

ClapTrap& ClapTrap::operator=(const ClapTrap &cpy)
{
    std::cout << "ClapTrap copy assignement operator called!" << std::endl;
    if (this != &cpy)
    {
        Name = cpy.Name;
        HitPoint = cpy.HitPoint;
        EnergyPoint = cpy.EnergyPoint;
        AttackDamage = cpy.AttackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (HitPoint == 0 || EnergyPoint == 0)
    {
        std::cout << "CLapTrap " << Name << " can't do anything!" << std::endl;
        return ;
    }
    EnergyPoint -= 1;
    std::cout << "ClapTrap " << Name << " attacks " << target;
    std::cout << " causing " << AttackDamage << " points of damage!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoint == 0 || EnergyPoint == 0)
    {
        std::cout << "CLapTrap " << Name << " can't do anything!" << std::endl;
        return ;
    }
    HitPoint += amount;
    EnergyPoint -= 1;
    std::cout << "ClapTrap " << Name << " get repaired with amount of " << amount << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoint == 0 || EnergyPoint == 0)
    {
        std::cout << "CLapTrap " << Name << " can't do anything!" << std::endl;
        return ;
    }
    if (amount > HitPoint)
        HitPoint = 0;
    else
        HitPoint -= amount;
    std::cout << "ClapTrap " << Name << " takes damage of " << amount << " amount" <<std::endl;
}
