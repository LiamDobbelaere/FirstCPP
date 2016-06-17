//
// Created by Tom Dobbelaere on 17/06/2016.
//

#ifndef FIRSTCPP_ITEM_POTION_H
#define FIRSTCPP_ITEM_POTION_H


#include "../baseitem.h"
#include "../player.h"

namespace Game {
    class ItemPotion : public BaseItem {
    public:
        void use(Player* player);
        char* getName();
    };
}

#endif //FIRSTCPP_ITEM_POTION_H
