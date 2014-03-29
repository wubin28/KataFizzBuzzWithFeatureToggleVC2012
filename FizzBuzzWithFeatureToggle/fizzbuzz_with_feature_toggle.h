#ifndef FIZZBUZZ_WITH_FEATURE_TOGGLE_H
#define	FIZZBUZZ_WITH_FEATURE_TOGGLE_H

#include "gtest/gtest.h"
#include <string>
using std::string;

class FizzBuzzHandler {
public:
	string handle(int number);
    void turnBodyMovementFeatureOn();
    void turnBodyMovementFeatureOff();
private:
    bool isBodyMovementFeatureOn;
};
#endif	/* FIZZBUZZ_WITH_FEATURE_TOGGLE_H */
