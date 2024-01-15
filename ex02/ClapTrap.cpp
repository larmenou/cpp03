/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:45:04 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 13:05:03 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "Default";
	this->_maxHitPoints = 10;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDmg = 0;
	std::cout << "Default ClapTrap constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_maxHitPoints = 10;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDmg = 0;
	std::cout << "ClapTrap " << this->_name << " is created !" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDmg)
{
	this->_name = name;
	this->_maxHitPoints = hitPoints;
	this->_hitPoints = hitPoints;
	this->_energyPoints = energyPoints;
	this->_attackDmg = attackDmg;
	std::cout << "ClapTrap " << this->_name << " is created !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	_name = copy._name;
	_maxHitPoints = copy._maxHitPoints;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDmg = copy._attackDmg;
	std::cout << "ClapTrap " << _name << " is created !" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_maxHitPoints = copy._maxHitPoints;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDmg = copy._attackDmg;
		std::cout << "ClapTrap " << _name << " is created with =." << std::endl;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " ClapTrap destructor called." << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints --;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy points or hit points available for this attack !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int tmp;
	tmp = this->_hitPoints - (int)amount;

	if (tmp < 0)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage, its new hit points are : " << this->_hitPoints << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		if (this->_hitPoints + amount > this->_maxHitPoints)
			this->_hitPoints = _maxHitPoints;
		else
			this->_hitPoints += amount;
		this->_energyPoints --;
		std::cout << "ClapTrap " << this->_name << " repairs itself with " << amount << " hit points. Its new hit points are : " << this->_hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy points or hit points available for repairs itself !" << std::endl;
	return ;
}