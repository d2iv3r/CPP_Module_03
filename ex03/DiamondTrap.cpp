/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:31:10 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/26 21:25:29 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called!" << std::endl;
    ClapTrap::Name += "_clap_name";
    this->EnergyPoint = 50;
    this->HitPoint = 100;
    this->AttackDamage = 30;
};

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), ScavTrap(n + "_clap_name") ,FragTrap(n + "_clap_name")
{
    this->Name = n;
    std::cout << "DiamondTrap " << this->Name << " param Constructor called!" << std::endl;
    this->EnergyPoint = 50;
    this->HitPoint = 100;
    this->AttackDamage = 30;
};

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy)
{
    std::cout << "DiamondTrap copy constructor called!" << std::endl;
    *this = cpy;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &cpy)
{
    std::cout << "DiamondTrap copy assignement operator called!" << std::endl;
    if (this != &cpy)
    {
        this->Name = cpy.Name;
        this->EnergyPoint = cpy.EnergyPoint;
        this->HitPoint = cpy.HitPoint;
        this->AttackDamage = cpy.AttackDamage;
    }
    return (*this);
};

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->Name << " destructor called!" << std::endl;
};

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap = " << this->Name << " >>>> ClapTrap name = " << ClapTrap::Name << std::endl;
}
