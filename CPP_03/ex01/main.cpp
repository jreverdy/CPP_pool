#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    std::cout << "---------ClapTrap---------" << std::endl << std::endl;

    {
        ClapTrap inst("loki");

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
            inst.attack("popi");
        std::cout << inst.getHitPoints() << std::endl;
        std::cout << inst.getEnergyPoints() << std::endl;
    }

    std::cout << std::endl << std::endl;
    std::cout << "---------ScavTrap---------" << std::endl << std::endl;

    {
        ScavTrap inst("Billy");

        inst.attack("bobi");
        std::cout << inst.getEnergyPoints() << std::endl;
        std::cout << inst.getAttackDamage() << std::endl;
        inst.attack("bobi");
        std::cout << inst.getEnergyPoints() << std::endl;
        std::cout << inst.getAttackDamage() << std::endl;
        inst.takeDamage(50);
        std::cout << inst.getHitPoints() << std::endl;
        inst.beRepaired(90);
        std::cout << inst.getHitPoints() << std::endl;
        inst.guardGate();
        for (int i = 0; i < 46; i++)
            inst.attack("popi");
        inst.beRepaired(10);
        inst.attack("test");
        std::cout << inst.getHitPoints() << std::endl;
        std::cout << inst.getEnergyPoints() << std::endl;
    }
}
