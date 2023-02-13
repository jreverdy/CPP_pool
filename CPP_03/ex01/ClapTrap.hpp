#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:

    std::string _Name;
    size_t      _HitPoints;
    size_t      _EnergyPoints;
    size_t      _AttackDamage;

public:

    //canonical class form

    ClapTrap();
    ClapTrap(std::string str);
    ClapTrap(const ClapTrap &rhs);
    ClapTrap &operator=(const ClapTrap &rhs);
    ~ClapTrap();

    //getters

    std::string getName();
    size_t      getHitPoints();
    size_t      getEnergyPoints();
    size_t      getAttackDamage();

    //functions members
    virtual void    attack(const std::string& target);
    virtual void    beRepaired(unsigned int amount);
    virtual void    takeDamage(unsigned int amount);

};

#endif