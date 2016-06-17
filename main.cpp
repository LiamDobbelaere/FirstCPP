#include <iostream>
#include "player.h"

using namespace Game;

int main() {
    Player newPlayer;

    std::cout << "The player's name is: " << newPlayer.getName() << std::endl;
    std::cout << "Player's health is  : " << newPlayer.getHealth() << std::endl;
    newPlayer.takeDamage(50);
    std::cout << "Player's health is  : " << newPlayer.getHealth() << std::endl;

    newPlayer.useItem(0);
    std::cout << "Player's health is  : " << newPlayer.getHealth() << std::endl;

    return 0;
}