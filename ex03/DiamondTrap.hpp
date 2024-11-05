/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:25:52 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/31 10:25:54 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
			std::string _name;

	public:
			DiamondTrap(void);
			DiamondTrap(std::string src);
			DiamondTrap(DiamondTrap const &src);
			DiamondTrap&	operator=(DiamondTrap const &src);
			void	whoAmI(void);
			~DiamondTrap(void);
};

#endif
