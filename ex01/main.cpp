/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:35:30 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/23 17:13:10 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap("jpiquet");
	// ClapTrap	clap;
	ScavTrap	scav("enchevri");

	scav.status();
	scav.attack("sithomas");
	scav.status();
	scav.takeDamage(3);
	// clap.status();
	// clap.attack("jweber");
	// clap.status();
	// clap.takeDamage(5);
	// clap.status();
	// clap.beRepaired(7);
	// clap.status();
	// clap.takeDamage(10);
	// clap.status();
	// clap.attack("abetemps");
	// clap.status();
	scav.guardGate();
	return (0);
}

