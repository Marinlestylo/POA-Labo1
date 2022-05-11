#include <iostream>
#include "boat.hpp"
#include "../controller.hpp"

const std::string Boat::RIVER =
        "==============================================================================";

Boat::Boat(Bank &current) : Container("Bateau",
                                      std::list<Person *>() = {}),
                            currentBank(&current) {}


std::ostream &Boat::toStream(std::ostream &os) const {
    if (currentBank->getName() == "Droite")
        os << std::endl << RIVER << std::endl;

    os << Container::getName() << " : " << "< " << Container::getPeopleNames() <<
       ">";
    if (currentBank->getName() == "Gauche")
        std::cout << std::endl << RIVER << std::endl;
    return os;
}

bool Boat::moveBoat(Bank &bank) {
    bool hasDriver = false;
    for (Person *p: *getPeople()) {
        if (p->canDrive()) {
            hasDriver = true;
            break;
        }
    }
    if (!hasDriver) {
        return false;
    }
    currentBank = &bank;
    return true;
}

bool Boat::isDockedOnthisBank(Bank &bank) const {
    return &bank == currentBank;
}

bool Boat::isFull() const {
    return getPeople()->size() >= MAX_CAPACITY;
}

bool Boat::isOnBank(const Person &person) const {
    return currentBank->isMember(person);
}
