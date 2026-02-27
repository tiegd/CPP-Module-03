/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:28:56 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 13:52:15 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
    _name = "<name>";
    _hit = 100;
    _energy = 50;
    _attack = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit = obj._hit;
		this->_energy = obj._energy;
		this->_attack = obj._attack;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    _name = name;
    _hit = 100;
    _energy = 50;
    _attack = 20;
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energy > 0 && _hit > 0)
	{
		_energy--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " can't attack " << target << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode !\n" << std::endl;
}
