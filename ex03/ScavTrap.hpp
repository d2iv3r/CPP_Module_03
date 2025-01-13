/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:02:25 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/26 21:23:18 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &cpy);
        ScavTrap(std::string name);
        ScavTrap &operator=(const ScavTrap &cpy);
        ~ScavTrap();
        void attack(const std::string &target);
        void guardGate( void );
};

#endif
