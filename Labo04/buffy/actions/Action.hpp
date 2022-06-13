#ifndef BUFFY_ACTION_HPP
#define BUFFY_ACTION_HPP

class Field;

class Humanoid;

/**
 * Classe représentant une action effectuée par un humanoïde
 * @author Jonathan Friedli
 * @author Lazar Pavicevic
 */
class Action {
public:
   /**
    * Constructeur de base
    * @param actionMaker l'humanoïde qui effectue l'action
    * @param target      la cible de l'action
    */
   Action(Humanoid& actionMaker, Humanoid* target);

   /**
    * Destructeur par défaut
    */
   virtual ~Action() = default;

   /**
    * Exécute l'action sur le field correspondant
    * @param field Field actuel de la simulation
    */
   virtual void execute(Field& field) = 0;

protected:
   Humanoid& actionMaker;
   Humanoid* target;

private:
};

#endif //BUFFY_ACTION_HPP
