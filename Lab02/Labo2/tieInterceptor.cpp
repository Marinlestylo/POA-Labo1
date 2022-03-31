//
// Created by Jonathan on 17.03.2022.
//

#include "tieInterceptor.hpp"
const unsigned TieInterceptor::speed = 100; // L'unité est MGLT
const unsigned TieInterceptor::weight = 6; // L'unité est tonne
const std::string TieInterceptor::modele = " [TIE/LN #1]";

const std::string &TieInterceptor::getModele() const{
    return modele;
}

double TieInterceptor::getWeight() const{
    return weight;
}

unsigned int TieInterceptor::getSpeed() const{
    return speed;
}