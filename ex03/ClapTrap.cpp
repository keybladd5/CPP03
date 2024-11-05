/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:10:50 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/25 12:11:09 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default ClapTrap constructor called for ";
	_name = "(null)";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << _name << std::endl;
}

ClapTrap::ClapTrap(std::string src)
{
	std::cout << "Default ClapTrap constructor called for ";
	_name = src;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor ClapTrap constructor called for ";
	*this = src;
	std::cout << _name << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &src)
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

void	ClapTrap::attack(std::string const &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " does not have energy points" << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is died" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " ,causing ";
	std::cout << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is died" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " take " << amount << " damage. Hit points -> ";
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " does not have energy points" << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is died" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " repair himself, causing extra ";
	if (amount + _hitPoints >= 10)
		_hitPoints = 10;
	else
		_hitPoints += amount;
	std::cout << _hitPoints << " points of health!" << std::endl;
	_energyPoints--;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default ClapTrap destructor called for " << _name << std::endl;
}
