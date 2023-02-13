#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;

    std::cout << "Default constructor called from ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string str)
{
    _Name = str;
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;

    std::cout << "Constructor called from ScavTrap" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "Copy assignment operator called from ScavTrap: " << _Name << std::endl;

    _Name = rhs._Name;
    _EnergyPoints = rhs._EnergyPoints;
    _HitPoints = rhs._HitPoints;
    _AttackDamage = rhs._AttackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called from ScavTrap" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (_EnergyPoints == 0)
    {
        std::cout << "ScavTrap has no energy, he cannot attack" << std::endl;
        return ;
    }
    else if (_HitPoints < 1)
    {
        std::cout << "ScavTrap is dead unfortunately"  << std::endl;
        return ;
    }
    else
    {
        _EnergyPoints -= 1;
        _AttackDamage += 1;
        std::cout << "ScavTrap " << " attacks " << target << " causing one point of damage" << std::endl;
    }
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints <= amount)
    {
        _HitPoints = 0;
        std::cout << _Name <<" died in terrible pain..." << std::endl;
        return ;
    }
    else
    {
        _HitPoints -= amount;
        std::cout << "ScavTrap " << _Name << " take " << amount;
        std::cout << " points of damage, he has now ";
        std::cout << _HitPoints << " left..." << std::endl;
    }
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoints == 0)
    {
        std::cout << "ScavTrap cannot be repaired, he has no energy left...";
        std::cout << std::endl;
        return ;
    }
    else if (_HitPoints + amount > 100)
        _HitPoints = 100;
    else
    {
        _HitPoints += amount;
        std::cout << "ScavTrap " << _Name << " been repaired by ";
        std::cout << amount << " , he have now " << _HitPoints;
        std::cout <<  "points of life" << std::endl;
    }
    _EnergyPoints -= 1;
}

void    ScavTrap::guardGate()
{
    _EnergyPoints -= 1;
    std::cout << "ScavTrap has now entered Gate Keeper mode" << std::endl;
}
