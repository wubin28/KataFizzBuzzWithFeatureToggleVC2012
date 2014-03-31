#include "fizzbuzz_with_feature_toggle.h"

namespace {

// The fixture for testing class FizzBuzzWithFeatureToggle.
class FizzBuzzWithFeatureToggleTest : public ::testing::Test {
protected:
	// You can remove any or all of the following functions if its body
	// is empty.

    FizzBuzzHandler *ptrFizzBuzzHandler;

	FizzBuzzWithFeatureToggleTest() {
	// You can do set-up work for each test here.
	}

	virtual ~FizzBuzzWithFeatureToggleTest() {
	// You can do clean-up work that doesn't throw exceptions here.
        delete this->ptrFizzBuzzHandler;
        this->ptrFizzBuzzHandler = NULL;
	}

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:

	virtual void SetUp() {
	// Code here will be called immediately after the constructor (right
	// before each test).
	}

	virtual void TearDown() {
	// Code here will be called immediately after each test (right
	// before the destructor).
	}

	// Objects declared here can be used by all tests in the test case for FizzBuzzWithFeatureToggle.
};

TEST_F(FizzBuzzWithFeatureToggleTest, GivenBodyMovementFeatureToggleIsOffWhenCommonNumberThenSayItDirectly) {
    ptrFizzBuzzHandler = new FizzBuzzHandler(new BodyMovementOff);
	EXPECT_EQ("1", ptrFizzBuzzHandler->handle(1));
	EXPECT_EQ("49", ptrFizzBuzzHandler->handle(49));
	EXPECT_EQ("98", ptrFizzBuzzHandler->handle(98));
}

TEST_F(FizzBuzzWithFeatureToggleTest, GivenBodyMovementFeatureToggleIsOnWhenCommonNumberThenSayItDirectly) {
    ptrFizzBuzzHandler = new FizzBuzzHandler(new BodyMovementOn);
	EXPECT_EQ("1", ptrFizzBuzzHandler->handle(1));
	EXPECT_EQ("49", ptrFizzBuzzHandler->handle(49));
	EXPECT_EQ("98", ptrFizzBuzzHandler->handle(98));
}

TEST_F(FizzBuzzWithFeatureToggleTest, GivenBodyMovementFeatureToggleIsOffWhenMultipleOf3ThenFizz) {
    ptrFizzBuzzHandler = new FizzBuzzHandler(new BodyMovementOff);
	EXPECT_EQ("Fizz", ptrFizzBuzzHandler->handle(3));
	EXPECT_EQ("Fizz", ptrFizzBuzzHandler->handle(51));
	EXPECT_EQ("Fizz", ptrFizzBuzzHandler->handle(99));
}

TEST_F(FizzBuzzWithFeatureToggleTest, GivenBodyMovementFeatureToggleIsOnWhenMultipleOf3ThenFizzAndTouchHead) {
    ptrFizzBuzzHandler = new FizzBuzzHandler(new BodyMovementOn);
	EXPECT_EQ("FizzAndTouchHead", ptrFizzBuzzHandler->handle(3));
	EXPECT_EQ("FizzAndTouchHead", ptrFizzBuzzHandler->handle(51));
	EXPECT_EQ("FizzAndTouchHead", ptrFizzBuzzHandler->handle(99));
}

}  // namespace


GTEST_API_ int main(int argc, char **argv) {
	printf("Running main() from gtest_main.cc\n");
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
