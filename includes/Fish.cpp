#include "Fish.hpp"

Fish::Fish(int s, int f, int cTime, int cValue, int fValue) {
    // Set position
    guppyState = s;
    foodsToGrow = f;
    coinTime = cTime;
    coinValue = cValue;
    fishValue = fValue;
    isFull = true;
    isRight = true;
}

// getter
int Fish::getFishState() const {
    return guppyState;
}

int Fish::getFoodsToGrow() const {
    return foodsToGrow;
}

int Fish::getCoinTime() const {
    return coinTime;
}

int Fish::getCoinValue() const {
    return coinValue
}

bool Fish::getFull() const {
    return isFull;
}

bool Fish::getRight() const {
    return isRight;
}

// setter
void Fish::setFishState(int state) {
    guppyState = state;
}

void Fish::setFoodsToGrow(int foods) {
    foodsToGrow = foods;
}

void Fish::setCoinTime(int cTime) {
    coinTime = cTime;
}

void Fish::setCoinValue(int value) {
    coinValue = value;
}

void Fish::setFull(bool full) {
    isFull = full;
}

void Fish::setRight(bool right) {
    isRight = right;
}