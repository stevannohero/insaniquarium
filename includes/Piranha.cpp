#include "Piranha.hpp"

virtual void Piranha::eat() {
    if (getClosestEntity(Guppy) == position) {
        foodsToGrow--;
        isFull = full;
    }
}