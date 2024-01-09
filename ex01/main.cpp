/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:45:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/09 12:01:43 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap alice("Alice");
	ScavTrap bob("Bob");
	
	alice.ClapTrap::attack("Bob");
	bob.takeDamage(0);
	bob.beRepaired(2);
	
	bob.ScavTrap::attack("Alice");
	alice.takeDamage(20);
	alice.ClapTrap::attack("Bob");
	bob.takeDamage(4);
	
	bob.beRepaired(5);
	bob.guardGate();
	return (0);
}
