#include "../includes/Guppy.hpp"
#include "../includes/Aquarium.hpp"

#include <time.h>

Guppy::Guppy() : Fish(1, 10, 10, 10, 10){
    int x = rand() % Aquarium::MAX_X;
    int y = rand() % Aquarium::MAX_Y;
    setPosition(Point(x, y));
}

// methods
void Guppy::eat() {
    /*if (getClosestEntity(Food) == this.getposition()) {
        foodsToGrow--;
        isFull = true;
        if (state < 3)
            checkGrowth();
    }*/
}

void Guppy::checkGrowth() {
    if (foodsToGrow <= 0) {
        state++;
        // Set next foods to grow
        switch (state) {
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
                state = 1;
                foodsToGrow = 10;
                coinTime = 10;
                coinValue = 10;
                isFull = true;
                isRight = true;
                break;
        }
    }
}

void Guppy::spawnCoin() {
    Coin(coinValue);
}

void Guppy::move(double sec_time) {
    std::string directions[4] = {"Up", "Down", "Left", "Right"};

    srand (time(NULL));

    int randDir = rand() % 4;

    // while(randDir > 0) {
    //     Entity::move(sec_time, directions[randDir]);
    //     usleep(3000000);
    // }
}
