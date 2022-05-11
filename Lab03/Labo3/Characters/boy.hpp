#ifndef LABO3_BOY_HPP
#define LABO3_BOY_HPP

#include "dependentPerson.hpp"

/**
 * Classe représentant un garcon
 */
class Boy : public DependentPerson {
public:
    /**
     * Constructeur de la classe Boy
     * @param name nom de la personne
     * @param dependsOn personne dont il dépend
     * @param badWith personne avec qui il ne peut pas rester
     */
    Boy(const std::string &name, const Person &dependsOn,const Person &badWith);

    const std::string& getErrorMessage() const override;

private:
    static const std::string ERROR_MESSAGE;
};


#endif //LABO3_BOY_HPP
