#include "ClapTrap.hpp"

int main()
{
    ClapTrap inst("Billy");

    inst.attack("bobi");
    std::cout << inst.getEnergyPoints() << std::endl;
    std::cout << inst.getAttackDamage() << std::endl;
    inst.attack("bobi");
    std::cout << inst.getEnergyPoints() << std::endl;
    std::cout << inst.getAttackDamage() << std::endl;
    inst.takeDamage(5);
    std::cout << inst.getHitPoints() << std::endl;
    inst.beRepaired(2);
    std::cout << inst.getHitPoints() << std::endl;
    inst.beRepaired(9);
    std::cout << inst.getHitPoints() << std::endl;
    for (int i = 0; i < 7; i++)
        inst.attack("bopi");
    std::cout << inst.getHitPoints() << std::endl;
    std::cout << inst.getEnergyPoints() << std::endl;
    inst.beRepaired(2);
}