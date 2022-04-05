/*
-----------------------------------------------------------------------------------
Nom du fichier : shuttle.hpp
Auteur(s)      : Alexandre Jaquier et Jonathan Friedli
Date creation  : 17.03.2022
Description    : Déclaration de la classe shuttle héritant de Transporter.
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO1_SHUTTLE_HPP
#define LABO1_SHUTTLE_HPP

#include "transporter.hpp"

class Shuttle : public Transporter {
public:

	explicit Shuttle(double load);

	const std::string& getModele() const override;

	double getWeight() const override;

	unsigned int getSpeed() const override;

	double getMaxLoad() const override;

private:
	const static std::string modele;
	const static unsigned speed;
	const static double maxLoad,weight;
	static unsigned int counter;
};


#endif //LABO1_SHUTTLE_HPP
