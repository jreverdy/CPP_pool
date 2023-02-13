#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _HitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;

    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str)
{
    _Name = str;
    _HitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;

    std::cout << "Constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "Copy assignment operator called : " << _Name << std::endl;

    _Name = rhs._Name;
    _EnergyPoints = rhs._EnergyPoints;
    _HitPoints = rhs._HitPoints;
    _AttackDamage = rhs._AttackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

//getters

std::string ClapTrap::getName()
{
    return (this->_Name);
}

size_t      ClapTrap::getHitPoints()
{
    return (this->_HitPoints);
}

size_t     ClapTrap::getEnergyPoints()
{
    return (this->_EnergyPoints);
}

size_t     ClapTrap::getAttackDamage()
{
    return (this->_AttackDamage);
}

//functions memnbers

void    ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoints == 0)
    {
        std::cout << "ClapTrap has no energy, he cannot attack" << std::endl;
        return ;
    }
    else if (_HitPoints < 1)
    {
        std::cout << "ClapTrap is out"  << std::endl;
        return ;
    }
    else
    {
        _EnergyPoints -= 1;
        _AttackDamage += 1;
        std::cout << "ClapTrap " << " attacks " << target << " causing one point of damage" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints <= amount)
    {
        _HitPoints = 0;
        std::cout << "ClapTrap died in terrible pain..." << std::endl;
        return ;
    }
    else
    {
        _HitPoints -= amount;
        std::cout << "ClapTrap " << _Name << " take " << amount;
        std::cout << " points of damage, he has now ";
        std::cout << _HitPoints << " left..." << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoints == 0)
    {
        std::cout << "ClapTrap cannot be repaired, he has no energy left...";
        std::cout << std::endl;
        return ;
    }
    else if (_HitPoints + amount > 10)
        _HitPoints = 10;
    else
    {
        _HitPoints += amount;
        std::cout << "ClapTrap " << _Name << " been repaired by ";
        std::cout << amount << " , he have now " << _HitPoints;
        std::cout <<  "points of life" << std::endl;
    }
    _EnergyPoints -= 1;
}