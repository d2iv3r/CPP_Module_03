/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:23:27 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/26 19:42:33 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called!" << std::endl;
    this->EnergyPoint *= 10;
    this->HitPoint *= 10;
    this->AttackDamage += 30;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << Name << " param Constructor called!" << std::endl;
    this->EnergyPoint *= 10;
    this->HitPoint *= 10;
    this->AttackDamage += 30;
};

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
    std::cout << "FragTrap copy constructor called!" << std::endl;
    *this = cpy;
};

FragTrap& FragTrap::operator=(const FragTrap &cpy)
{
    std::cout << "FragTrap copy assignement operator called!" << std::endl;
    if (this != &cpy)
    {
        Name = cpy.Name;
        HitPoint = cpy.HitPoint;
        EnergyPoint = cpy.EnergyPoint;
        AttackDamage = cpy.AttackDamage;
    }
    return (*this);
};

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << Name << " destructor called!" << std::endl;
};

void FragTrap::attack(const std::string &target)
{
    if (HitPoint == 0 || EnergyPoint == 0)
    {
        std::cout << "FragTrap " << Name << " can't do anything!" << std::endl;
        return ;
    }
    EnergyPoint -= 1;
    std::cout << "FragTrap " << Name << " attacks " << target;
    std::cout << " causing " << AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << Name << " is high fives guys!" << std::endl;
}
