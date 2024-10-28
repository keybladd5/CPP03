/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:20:10 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/28 10:20:12 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	_name = "(null)";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string src) : ClapTrap(src)
{
	std::cout << "Default ScavTrap constructor called for ";
	_name = src;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "Copy constructor ScavTrap constructor called for ";
	*this = src;
	std::cout << _name << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &src)
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

void	ScavTrap::attack(std::string const &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " does not have energy points" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing ";
	std::cout << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void	ScavTrap::guardGate(void)
{
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " does not have energy points" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
	_energyPoints--;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Default ScavTrap destructor called" << std::endl;
}
