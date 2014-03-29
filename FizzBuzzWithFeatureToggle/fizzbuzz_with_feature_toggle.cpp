#include "fizzbuzz_with_feature_toggle.h"

string FizzBuzzHandler::handle(int number) {
    return ptrBodyMovement->respond(number);
}

void FizzBuzzHandler::turnBodyMovementFeatureOn() {
    isBodyMovementFeatureOn = 1;
}

void FizzBuzzHandler::turnBodyMovementFeatureOff() {
    isBodyMovementFeatureOn = 0;
}

FizzBuzzHandler::FizzBuzzHandler(BodyMovement *ptrBodyMovement) {
    this->ptrBodyMovement = ptrBodyMovement;
}

string BodyMovementOff::respond(int number) {
    if (number % 3 == 0) {
        return "Fizz";
    }
    return std::to_string(number);
}

string BodyMovementOn::respond(int number) {
    if (number % 3 == 0) {
        return "FizzAndTouchHead";
    }
    return std::to_string(number);
}
