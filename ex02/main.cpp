/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:45:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/09 15:13:44 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap alice("Alice");
	ScavTrap bob("Bob");
	FragTrap charlie("Charlie");
	
	alice.ClapTrap::attack("Bob");
	bob.takeDamage(0);
	bob.beRepaired(2);
	
	std::cout << std::endl;
	
	bob.ScavTrap::attack("Alice");
	alice.takeDamage(20);
	alice.ClapTrap::attack("Bob");
	bob.takeDamage(4);
	bob.beRepaired(5);
	bob.guardGate();

	std::cout << std::endl;
	
	charlie.ClapTrap::attack("Bob");
	bob.takeDamage(30);
	bob.ScavTrap::attack("Charlie");
	charlie.takeDamage(20);
	charlie.beRepaired(25);
	charlie.highFivesGuys();
	
	return (0);
}
