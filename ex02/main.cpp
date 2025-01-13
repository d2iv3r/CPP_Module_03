# include "FragTrap.hpp"

int main()
{
    FragTrap *frag = new FragTrap("frag");
    frag->attack("scavv");
    frag->takeDamage(60);
    frag->beRepaired(10);
    frag->highFivesGuys();
    frag->takeDamage(50);
    frag->attack("none");
    delete(frag);
}
