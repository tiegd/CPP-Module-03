/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:01:09 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 13:48:52 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP__
	#define __SCAVTRAP__

	#include "ClapTrap.hpp"

	class ScavTrap : public ClapTrap
	{
		public:
			ScavTrap();
			ScavTrap(const ScavTrap &obj);
			ScavTrap& operator=(const ScavTrap &obj);
			ScavTrap(const std::string name);
			~ScavTrap();
			void	attack(const std::string& target);
			void	guardGate();
	};

#endif
