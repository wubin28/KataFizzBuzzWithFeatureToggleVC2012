#include "fizzbuzz_with_feature_toggle.h"

string FizzBuzzHandler::handle(int number) {
    if (number % 3 == 0) {
        return "Fizz";
    }
	return std::to_string(number);
}

void FizzBuzzHandler::turnBodyMovementFeatureOn() {
    isBodyMovementFeatureOn = 1;
}

void FizzBuzzHandler::turnBodyMovementFeatureOff() {
    isBodyMovementFeatureOn = 0;
}
