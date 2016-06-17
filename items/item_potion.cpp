//
// Created by Tom Dobbelaere on 17/06/2016.
//

#include "item_potion.h"

namespace Game {
    void ItemPotion::use(Player* player) {
        player->heal(50);
    }

    char* ItemPotion::getName() {
        return (char*) "fuck you";
    }
}

