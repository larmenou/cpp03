/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:40:33 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/12 12:25:55 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap::ClapTrap("default_clap_name", 100, 50, 30)
{
	this->_name = "default";
	std::cout << "Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap::ClapTrap(name + "_clap_name", 100, 50, 30)
{
	this->_name = name;
	std::cout << "DiamondTrap " << name << " is created !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& copy)
{
	_name = copy._name;
	_maxHitPoints = copy._maxHitPoints;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDmg = copy._attackDmg;
	std::cout << "DiamondTrap " << _name << " is created !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_maxHitPoints = copy._maxHitPoints;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDmg = copy._attackDmg;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
	std::cout << "I am " << this->_name << "... but I am also " << ClapTrap::_name << ". Wh... Who am I ...?" << std::endl;
}