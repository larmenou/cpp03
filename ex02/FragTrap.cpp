/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:58:54 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 13:05:14 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
	std::cout << "Default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap " << this->_name << " is created !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	_name = copy._name;
	_maxHitPoints = copy._maxHitPoints;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDmg = copy._attackDmg;
	std::cout << "FragTrap " << _name << " is created !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_maxHitPoints = copy._maxHitPoints;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDmg = copy._attackDmg;
		std::cout << "FragTrap " << _name << " is created with =." << std::endl;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << _name << " FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << _name << ": \"Hey guys, give me high five !\"" << std::endl;
}
