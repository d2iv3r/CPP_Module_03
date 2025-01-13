/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:20:43 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/26 21:23:28 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called!" << std::endl;
    this->EnergyPoint = 50;
    this->HitPoint = 100;
    this->AttackDamage = 20;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << Name << " param Constructor called!" << std::endl;
    this->EnergyPoint = 50;
    this->HitPoint = 100;
    this->AttackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
    std::cout << "ScavTrap copy constructor called!" << std::endl;
    *this = cpy;
};

ScavTrap& ScavTrap::operator=(const ScavTrap &cpy)
{
    std::cout << "ScavTrap copy assignement operator called!" << std::endl;
    if (this != &cpy)
    {
        Name = cpy.Name;
        HitPoint = cpy.HitPoint;
        EnergyPoint = cpy.EnergyPoint;
        AttackDamage = cpy.AttackDamage;
    }
    return (*this);
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " destructor called!" << std::endl;
};

void ScavTrap::attack(const std::string &target)
{
    if (HitPoint == 0 || EnergyPoint == 0)
    {
        std::cout << "ScavTrap " << Name << " can't do anything!" << std::endl;
        return ;
    }
    EnergyPoint -= 1;
    std::cout << "ScavTrap " << Name << " attacks " << target;
    std::cout << " causing " << AttackDamage << " points of damage!" << std::endl;

}

void ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}
