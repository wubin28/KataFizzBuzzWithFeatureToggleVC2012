#include "fizzbuzz_with_feature_toggle.h"

string FizzBuzzHandler::handle(int number) {
    if (number % 3 == 0) {
        return "Fizz";
    }
	return std::to_string(number);
}
