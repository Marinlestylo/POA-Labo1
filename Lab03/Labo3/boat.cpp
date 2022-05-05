//
// Created by Jonathan on 14.04.2022.
//

#include <iostream>
#include "boat.hpp"

const std::string Boat::RIVER =
	"==============================================================================";

Boat::Boat(Bank* current) : Container("Bateau", std::list<Person *>()),
									 currentBank(current) { }

void Boat::showContainer() const {
	if(currentBank->getName() == "gauche"){
		std::cout << Container::getName() << " : " << "< ";
		Container::showContainer();
		std::cout << " >" << std::endl << RIVER << std::endl;
	} else{
		std::cout << std::endl << RIVER << std::endl << Container::getName()
		<< " : " << "< ";
		Container::showContainer();
		std::cout << " >";
	}
}

void Boat::moveBoat(Bank* bank) {
	currentBank = bank;

}

Bank* Boat::getBank() const {
	return currentBank;
}
