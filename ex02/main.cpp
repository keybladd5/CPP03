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

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap jhonny("Jhonny");
	FragTrap copy(jhonny);
	FragTrap badboy("Bad Boy");

	badboy.highFive();
	copy.highFive();
	std::cout << "\n";
	jhonny.highFive();
	for (int i = 0; i < 100; i++)
		jhonny.highFive();
}

