/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:19:56 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/28 10:19:58 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
			unsigned int _tmp;
	public:
			ScavTrap(void);
			ScavTrap(std::string src);
			ScavTrap(ScavTrap const &src);
			ScavTrap&	operator=(ScavTrap const &src);
			void	attack(const std::string& target);
			void	guardGate(void);
			~ScavTrap(void);
};

#endif
