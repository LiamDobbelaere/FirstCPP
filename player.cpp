//
// Created by Tom Dobbelaere on 16/06/2016.
//

#include <iostream>
#include "player.h"

namespace Game {
    Player::Player() {
        this->name = (char*) "unnamed";
        this->health = 100;
    }

    Player::Player(const char* newname) : Player() {
        this->name = (char*) newname;
    }

    char* Player::getName() const {
        return this->name;
    }

    Inventory Player::getInventory() const {
        return this->inventory;
    }

    int Player::getHealth() const {
        return this->health;
    }

    void Player::heal(int amount) {
        if (this->health + amount > 100) {
            this->health = 100;
        } else {
            this->health += amount;
        }
    }

    void Player::takeDamage(int amount) {
        if (this->health - amount < 0) {
            this->health = 0;
        } else {
            this->health -= amount;
        }
    }

    void Player::useItem(int id) {
        this->inventory.getItems()[id]->use(this);
    }

}
