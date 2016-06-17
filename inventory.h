//
// Created by Tom Dobbelaere on 16/06/2016.
//

#ifndef FIRSTCPP_INVENTORY_H
#define FIRSTCPP_INVENTORY_H

#include <vector>
#include <array>
#include "baseitem.h"

namespace Game {
    class Inventory {
    public:
        Inventory();
        std::vector<BaseItem*> getItems() const;
    private:
        std::vector<BaseItem*> items;
    };
}

#endif //FIRSTCPP_INVENTORY_H
