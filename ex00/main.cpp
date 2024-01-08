/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:45:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/08 15:14:28 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap alice("Alice");
	ClapTrap bob("Bob");
	
	alice.attack("Bob");
	bob.takeDamage(4);
	bob.beRepaired(2);
	
	bob.attack("Alice");
	alice.takeDamage(4);
	alice.attack("Bob");
	bob.takeDamage(4);
	alice.attack("Bob");
	bob.takeDamage(6);
	bob.beRepaired(5);
	return (0);
}
