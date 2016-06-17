//
// Created by Tom Dobbelaere on 17/06/2016.
//

#ifndef FIRSTCPP_BASEITEM_H
#define FIRSTCPP_BASEITEM_H

namespace Game {
    class Player; //Forward declaration of player woohoo!

    class BaseItem {
    public:
        virtual void use(Player* player) = 0;
        virtual char* getName() = 0;
    };
}


#endif //FIRSTCPP_BASEITEM_H
