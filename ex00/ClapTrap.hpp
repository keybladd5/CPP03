/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:11:18 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/25 12:11:21 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define ORANGE "\033[1;31m"
# define WHITE "\033[0;37m"
# define BLACK "\x1B[30m"
# define RESET "\x1B[0m"

class ClapTrap
{
	private:

			std::string		_name;
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;
	
	public:
			ClapTrap(void);
			ClapTrap(std::string src);
			ClapTrap(ClapTrap const &src);
			ClapTrap& operator=(ClapTrap const &src);
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			~ClapTrap();
};


#endif
