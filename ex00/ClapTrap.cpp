#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    return ;
}

ClapTrap::ClapTrap(std::string name) (_name = name)
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attack = copy._attack;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    if (this != &copy) {
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _energyPoints = copy._energyPoints;
        _attack = copy._attack;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    if (this != &copy) {
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _energyPoints = copy._energyPoints;
        _attack = copy._attack;
    }
    return (*this);
}

ClapTrap::void attack(const ClapTrap& target)
{
    target.takeDamage(this->_attack);
    this->energyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target._name << ", causing " << this->_attack << " points of damage!" << std::endl; 
}

ClapTrap::void takeDamage(unsigned int amount)
{
    if (this->_hitPoints - amount < 0)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    return ;
}

ClapTrap::void beRepaired(unsigned int amount)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
        this->_energyPoints += (amount - 1);
    return ;
}