/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:45:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 11:32:52 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap alice("Alice");
	ClapTrap bob("Bob");
	ClapTrap charlie(bob);
	ClapTrap delta;
	delta = alice;

	std::cout << std::endl;
	
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
	for (int i = 0; i < 8; i++)
		alice.beRepaired(1);
	alice.attack("Bob");

	std::cout << std::endl;

	return (0);
}
