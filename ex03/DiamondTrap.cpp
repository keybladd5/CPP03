/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:25:33 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/31 10:25:35 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	std::cout << "Default DiamondTrap constructor called for ";
	_name = "(null)";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_tmp;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "Default DiamondTrap constructor called for ";
	_name = src;
	ClapTrap::_name = src + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_tmp;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << _name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)  : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "Copy constructor DiamondTrap constructor called for ";
	*this = src;
	std::cout << _name << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &src)
	{
		_name = src._name;
		ClapTrap::_name = src.ClapTrap::_name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage =  src._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ScavTrap::ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called for ";
	std::cout << _name << std::endl;
}
