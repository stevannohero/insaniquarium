#include "Guppy.hpp"

Guppy::Guppy() {
    
}
// methods
void Guppy::eat() {
    if (getClosestEntity(Food) == position) {
        foodsToGrow--;
        isFull = full;
        if (guppyState < 3)
            checkGrowth();
    }
}

void Guppy::checkGrowth() {
    if (foodsToGrow <= 0) {
        guppyState++;
        // Set next foods to grow
        switch guppyState {
            case 2 :
                // guppyState = 2;
                foodsToGrow = 20;
                coinTime = 20;
                coinValue = 20;
                break;
            case 3 :
                // guppyState = 3;
                foodsToGrow = 30;
                coinTime = 30;
                coinValue = 30;
                break;
            default :
                // Error, but set values to guppyState = 1
                guppyState = 1;
                foodsToGrow = 10;
                coinTime = 10;
                coinValue = 10;
                isFull = true;
                isRight = true;
                break;
        }
    }
}

void Guppy:spawnCoin() {
    Coin(coinValue);
}