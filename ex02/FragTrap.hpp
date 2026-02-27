/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:53:25 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 13:44:33 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__
	#define __FRAGTRAP__

	#include "ClapTrap.hpp"

	class FragTrap : public ClapTrap
	{
		public:
			FragTrap();
			FragTrap(const FragTrap &obj);
			FragTrap& operator=(const FragTrap &obj);
			~FragTrap();
			FragTrap(const std::string name);
			void	highFivesGuys();
	};

#endif
