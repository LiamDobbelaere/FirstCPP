//
// Created by Tom Dobbelaere on 16/06/2016.
//

#ifndef FIRSTCPP_PLAYER_H
#define FIRSTCPP_PLAYER_H

#include "inventory.h"

namespace Game {
    class Player {
    public:
        Player();

        Player(const char* newname);

        char* getName() const;

        Inventory getInventory() const;

        int getHealth() const;

        void heal(int amount);

        void takeDamage(int amount);

        void useItem(int id);

    private:
        Inventory inventory;
        char* name;
        int health;

    };
}


#endif //FIRSTCPP_PLAYER_H
