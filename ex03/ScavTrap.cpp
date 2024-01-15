/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:33:07 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 13:16:06 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap("Default", 100, 50, 20)
{
	std::cout << "Default ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << this->_name << " is created !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	_name = copy._name;
	_maxHitPoints = copy._maxHitPoints;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDmg = copy._attackDmg;
	std::cout << "ScavTrap " << _name << " is created !" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_maxHitPoints = copy._maxHitPoints;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDmg = copy._attackDmg;
		std::cout << "ScavTrap " << _name << " is created with =." << std::endl;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " ScavTrap destructor called." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints --;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " has no energy points or hit points available for this attack !" << std::endl;
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << this->_name << ": Guard Mode activated." << std::endl;
}
