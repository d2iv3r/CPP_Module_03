/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:27:18 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/26 21:24:44 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
#define DIAMOND_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, protected FragTrap
{
	private:
	    std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(const DiamondTrap &cpy);
        DiamondTrap(std::string n);
        DiamondTrap &operator=(const DiamondTrap &cpy);
        ~DiamondTrap();
        void attack(const std::string &target);
        void whoAmI();
};

#endif
