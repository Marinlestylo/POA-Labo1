//
// Created by Alexandre Jaquier on 06.05.2022.
//

#ifndef LABO3_DRIVER_HPP
#define LABO3_DRIVER_HPP


#include "person.hpp"

class Driver : public Person {
public:
    explicit Driver(const std::string & name);
    bool canDrive() override;
};


#endif //LABO3_DRIVER_HPP