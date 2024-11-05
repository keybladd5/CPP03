/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:11:35 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/28 11:15:04 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap jhonny("Jhonny");
	DiamondTrap copy(jhonny);
	DiamondTrap badboy("Bad Boy");

	badboy.whoAmI();
	copy.whoAmI();
	std::cout << "\n";
	jhonny.whoAmI();
	for (int i = 0; i < 100; i++)
		jhonny.attack("lombarda");
}

