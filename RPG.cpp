#include <iostream>
#include "RPG.h"
#include "RPG.cpp"

using namespace std;

int main()
{
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n", pt.getHealth(), p1.getStrength(0, p1.getDefense());

    // DO THE SAME FOR p2

    //CALL updateHealth(0) on either p1 and p2
    p1.updateHealth(0);

    //Print out the new health
    printf("%s's new health: %i\n", p1.getName().c_str(),p1.getHealth());

    //Call isAlive() on both p1 and p2
    printf("%s is alive: %s\n", p1.getName().c_str(), p1.isAlive() ? "true" : "false")
    printf("%s is alive: %s\n", p2.getName().c_str(), p2.isAlive() ? "true" : "false")

}
return 0;

