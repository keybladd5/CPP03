/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:40:07 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/28 12:40:09 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	_name = "(null)";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string src) : ClapTrap(src)
{
	std::cout << "Default FragTrap constructor called for ";
	_name = src;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "Copy constructor FragTrap constructor called for ";
	*this = src;
	std::cout << _name << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &src)
	{
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage =  src._attackDamage;
	}
	return (*this);
}

void	FragTrap::highFive(void)
{
	if (_energyPoints == 0)
	{
		std::cout << "FragTrap " << _name << " does not have energy points" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " Says: HIGH FIVE!" << std::endl;
	_energyPoints--;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Default FragTrap destructor called" << std::endl;
}