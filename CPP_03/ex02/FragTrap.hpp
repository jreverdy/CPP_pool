#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <cstdlib>

class FragTrap : public ClapTrap
{
public:

    //canonical class form
    FragTrap();
    FragTrap(std::string str);
    FragTrap(const FragTrap &rhs);
    FragTrap &operator=(const FragTrap &rhs);
    ~FragTrap();

    //function member
    void    attack(const std::string& target);
    void    beRepaired(unsigned int amount);
    void    takeDamage(unsigned int amount);
    void    highFiveGuys(void);
};

#endif