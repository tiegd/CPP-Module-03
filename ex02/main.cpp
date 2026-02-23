/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:35:30 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/23 18:12:31 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	clap("jpiquet");
	// ClapTrap	clap;
	FragTrap	frag("enchevri");

	clap.status();
	frag.status();

	frag.attack("sithomas");
	frag.status();
	frag.takeDamage(30);
	frag.attack("jweber");
	frag.status();
	frag.takeDamage(50);
	frag.status();
	frag.beRepaired(70);
	frag.status();
	frag.takeDamage(100);
	frag.status();
	frag.attack("abetemps");
	frag.status();
	frag.highFivesGuys();
	return (0);
}

