//
// Created by Jonathan on 14.04.2022.
//

#ifndef LABO3_BOAT_HPP
#define LABO3_BOAT_HPP

#include "bank.hpp"
#include "container.hpp"

class Boat : public Container {
public:
    explicit Boat(Bank *bank);
    void moveBoat();
    /**
     * method that print the boat on the screen and all the people on the boat
     */
    void printBoat();
private:
    Bank* bank;
};


#endif //LABO3_BOAT_HPP