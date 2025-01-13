# include "ScavTrap.hpp"

int main()
{
    ScavTrap *scav = new ScavTrap("scavv");
    scav->attack("trap");
    scav->takeDamage(30);
    scav->beRepaired(10);
    scav->guardGate();
    scav->takeDamage(80);
    scav->attack("none");
    delete(scav);
    return 0;
}
