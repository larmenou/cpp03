/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:45:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 12:47:21 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		ClapTrap alice("Alice");
		ScavTrap bob("Bob");

		std::cout << std::endl;
		
		alice.attack("Bob");
		bob.takeDamage(0);
		bob.beRepaired(2);
		
		bob.attack("Alice");
		alice.takeDamage(20);
		alice.attack("Bob");
		bob.takeDamage(4);
		
		bob.beRepaired(5);
		bob.guardGate();
		
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		
		ClapTrap alice;
		ScavTrap bob;
		
		std::cout << std::endl;

		//bob = alice; //don't work
		alice = bob;

		std::cout << std::endl;
	}
	return (0);
}
