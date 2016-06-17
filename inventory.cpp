//
// Created by Tom Dobbelaere on 16/06/2016.
//

#include "inventory.h"
#include "items/item_potion.h"

namespace Game {
    Inventory::Inventory() {
        this->items.push_back(new ItemPotion);
    }

    std::vector<BaseItem*> Inventory::getItems() const {
        return items;
    }
}

