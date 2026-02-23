/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:53:15 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/23 18:00:29 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "<name>";
    _hit = 100;
    _energy = 100;
    _attack = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    _name = name;
    _hit = 100;
    _energy = 100;
    _attack = 30;
	std::cout << "FragTrap Parameterized constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap Hight Five !\n" << std::endl;
}
