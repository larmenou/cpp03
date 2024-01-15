/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:45:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 14:14:47 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap alice("Alice");
	ScavTrap bob("Bob");
	FragTrap charlie("Charlie");
	DiamondTrap monster("exp_025i");
	
	std::cout << std::endl;
	
	alice.attack("Bob");
	bob.takeDamage(0);
	bob.beRepaired(2);
	
	std::cout << std::endl;
	
	bob.attack("Alice");
	alice.takeDamage(20);
	alice.attack("Bob");
	bob.takeDamage(4);
	bob.beRepaired(5);
	bob.guardGate();

	std::cout << std::endl;
	
	charlie.attack("Bob");
	bob.takeDamage(30);
	bob.attack("Charlie");
	charlie.takeDamage(20);
	charlie.beRepaired(25);
	charlie.highFivesGuys();

	std::cout << std::endl;

	monster.whoAmI();
	bob.attack("exp_025i");
	monster.takeDamage(20);
	alice.attack("exp_025i");
	monster.takeDamage(0);
	charlie.attack("exp_025i");
	monster.takeDamage(30);
	charlie.highFivesGuys();
	bob.guardGate();
	charlie.attack("exp_025i");
	monster.takeDamage(30);
	charlie.highFivesGuys();
	monster.attack("Charlie");
	monster.attack("Charlie");
	monster.attack("Charlie");
	charlie.takeDamage(30);
	charlie.takeDamage(30);
	charlie.takeDamage(30);
	monster.whoAmI();

	std::cout << std::endl;
	
	return (0);
}
