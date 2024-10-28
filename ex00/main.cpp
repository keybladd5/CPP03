/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:11:35 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/25 12:11:37 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap jhonny("Jhonny");
	ClapTrap copy(jhonny);
	ClapTrap badboy("Bad Boy");

	jhonny.attack("Bad Boy");
	badboy.takeDamage(5);
	copy.attack("Bad Boy");
	badboy.takeDamage(10);
	for(int i = 0; i < 11; i++)
		badboy.beRepaired(1);
	for(int i = 0; i < 11; i++)
		jhonny.attack("Bad Boy");
}

