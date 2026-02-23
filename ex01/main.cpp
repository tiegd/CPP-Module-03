/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:35:30 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/23 17:44:37 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap("jpiquet");
	// ClapTrap	clap;
	ScavTrap	scav("enchevri");

	clap.status();
	scav.status();
	
	scav.attack("sithomas");
	scav.status();
	scav.takeDamage(30);
	scav.attack("jweber");
	scav.status();
	scav.takeDamage(50);
	scav.status();
	scav.beRepaired(70);
	scav.status();
	scav.takeDamage(100);
	scav.status();
	scav.attack("abetemps");
	scav.status();
	scav.guardGate();
	return (0);
}

