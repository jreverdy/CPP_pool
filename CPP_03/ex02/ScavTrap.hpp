#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

    //canonical class form
    ScavTrap();
    ScavTrap(std::string str);
    ScavTrap(const ScavTrap &rhs);
    ScavTrap &operator=(const ScavTrap &rhs);
    ~ScavTrap();

    //function member
    void    attack(const std::string& target);
    void    beRepaired(unsigned int amount);
    void    takeDamage(unsigned int amount);
    void    guardGate();
};

#endif