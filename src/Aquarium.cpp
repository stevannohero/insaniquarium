#include "../includes/Aquarium.hpp"

LinkedList<Guppy*> Aquarium::guppies = LinkedList<Guppy*>();
LinkedList<Piranha*> Aquarium::piranhas = LinkedList<Piranha*>();
LinkedList<Coin*> Aquarium::coins = LinkedList<Coin*>();
LinkedList<Food*> Aquarium::foods = LinkedList<Food*>();
Snail* Aquarium::snail = new Snail();

int Aquarium::nGuppies = 1;
int Aquarium::nPiranhas = 0;
int Aquarium::nFoods = 0;
int Aquarium::nCoins = 0;

Aquarium::Aquarium() {
    guppies.add(new Guppy());
}



