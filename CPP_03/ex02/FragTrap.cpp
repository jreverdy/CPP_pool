#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;

    std::cout << "Default constructor called from FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
    _Name = str;
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;

    std::cout << "Construcor called from FragTrap" << std::endl;
}
FragTrap & FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "Copy assignment operator called from FragTrap" << _Name << std::endl;

    _Name = rhs._Name;
    _EnergyPoints = rhs._EnergyPoints;
    _HitPoints = rhs._HitPoints;
    _AttackDamage = rhs._AttackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called from FragTrap" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (_EnergyPoints == 0)
    {
        std::cout << "FragTrap has no energy, he cannot attack" << std::endl;
        return ;
    }
    else if (_HitPoints < 1)
    {
        std::cout << "FragTrap is dead unfortunately"  << std::endl;
        return ;
    }
    else
    {
        _EnergyPoints -= 1;
        std::cout << "FragTrap " << " attacks " << target << " causing " << _AttackDamage << " of damage" << std::endl;
    }
}

void    FragTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints <= amount)
    {
        _HitPoints = 0;
        std::cout << _Name << " died in terrible pain..." << std::endl;
        return ;
    }
    else
    {
        _HitPoints -= amount;
        std::cout << "FragTrap " << _Name << " take " << amount;
        std::cout << " points of damage, he has now ";
        std::cout << _HitPoints << " left..." << std::endl;
    }
}

void    FragTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoints == 0)
    {
        std::cout << "FragTrap cannot be repaired, he has no energy left...";
        std::cout << std::endl;
        return ;
    }
    else if (_HitPoints + amount > 100)
        _HitPoints = 100;
    else
    {
        _HitPoints += amount;
        std::cout << "FragTrap " << _Name << " been repaired by ";
        std::cout << amount << " , he have now " << _HitPoints;
        std::cout <<  "points of life" << std::endl;
    }
    _EnergyPoints -= 1;
}

void    FragTrap::highFiveGuys()
{
    std::string buff;

    _EnergyPoints -= 1;
    std::cout << "FragTrap wants to do a high five, are you in ??";
    std::cout << "[Yes/No]" << std::endl;
    while (true)
    {
        if (!std::getline(std::cin, buff))
            exit(1);
        if (buff == "Yes")
        {
            std::cout << "High five !! FragTrap is very Happy" << std::endl << std::endl;
            return ;
        }
        else if (buff == "No")
        {
            std::cout << "Congratulations... You made FragTrap super sad" << std::endl << std::endl;
            return ;
        }
    }
}