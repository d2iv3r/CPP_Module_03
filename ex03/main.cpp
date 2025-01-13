# include "DiamondTrap.hpp"

int main()
{
    DiamondTrap *diamond = new DiamondTrap("diamond");
    diamond->attack("test");
    diamond->takeDamage(100);
    diamond->beRepaired(3);
    diamond->whoAmI();
    delete(diamond);

    // DiamondTrap *diamond = new DiamondTrap("diamond");
    // ClapTrap *p = diamond;
    // delete p;

    // DiamondTrap a("test");
    // DiamondTrap b = a;
    // a.takeDamage(100);
    // a.attack("tt");
    // a.whoAmI();
    // b.whoAmI();
    // b.attack("tt2");
    return 0;
}
