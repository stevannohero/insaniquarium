#include "../includes/Aquarium.hpp"

Aquarium::Aquarium() {
    guppies.add(new Guppy());
    coins.add(new Coin());
    snail = new Snail();
}