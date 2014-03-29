#ifndef FIZZBUZZ_WITH_FEATURE_TOGGLE_H
#define	FIZZBUZZ_WITH_FEATURE_TOGGLE_H

#include "gtest/gtest.h"
#include <string>
using std::string;

class BodyMovement {
public:
    virtual string respond(int number) = 0;
};

class BodyMovementOn : public BodyMovement {
public:
    string respond(int number) override;
};

class BodyMovementOff : public BodyMovement {
public:
    string respond(int number) override;
};

class FizzBuzzHandler {
public:
    FizzBuzzHandler(BodyMovement *ptrBodyMovement);
	string handle(int number);
    void turnBodyMovementFeatureOn();
    void turnBodyMovementFeatureOff();
private:
    bool isBodyMovementFeatureOn;
    BodyMovement *ptrBodyMovement;
};

#endif	/* FIZZBUZZ_WITH_FEATURE_TOGGLE_H */
