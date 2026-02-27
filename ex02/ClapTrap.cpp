/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:35:10 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 13:53:00 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("<name>"), _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->_name = obj._name;
        this->_hit = obj._hit;
        this->_energy = obj._energy;
        this->_attack = obj._attack;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energy > 0 && _hit > 0)
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can't attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hit -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage !" << std::endl;
	if (_hit <= 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0 && _hit > 0)
	{
		_hit += amount;
		_energy--;
		std::cout << "ClapTrap " << _name << " takes " << amount << " new hit points by reparing himself." << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can't repare himself." << std::endl;
}

void    ClapTrap::status(void)
{
    std::cout << "\nStatus of " << _name << "\nhit : " << _hit << "\nenergy : " << _energy << "\n" << std::endl;
}
