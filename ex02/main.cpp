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

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap jhonny("Jhonny");
	ScavTrap copy(jhonny);
	ScavTrap badboy("Bad Boy");

	jhonny.attack("Bad Boy");
	badboy.takeDamage(5);
	copy.attack("Bad Boy");
	badboy.takeDamage(10);
	jhonny.guardGate();
	for(int i = 0; i < 50; i++)
		jhonny.attack("Bad Boy");

}

