/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:40:19 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/28 12:40:21 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			FragTrap(void);
			FragTrap(std::string src);
			FragTrap(FragTrap const &src);
			FragTrap&	operator=(FragTrap const &src);
			void	highFive(void);
			~FragTrap(void);
};

#endif
