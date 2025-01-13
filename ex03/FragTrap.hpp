/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:22:30 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/25 18:20:54 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap &cpy);
        FragTrap(std::string name);
        FragTrap &operator=(const FragTrap &cpy);
        ~FragTrap();
        void attack(const std::string &target);
        void highFivesGuys( void );
};

#endif
