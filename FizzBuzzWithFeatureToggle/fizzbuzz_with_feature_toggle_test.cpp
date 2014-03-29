#include "fizzbuzz_with_feature_toggle.h"

namespace {

// The fixture for testing class FizzBuzzWithFeatureToggle.
class FizzBuzzWithFeatureToggleTest : public ::testing::Test {
protected:
	// You can remove any or all of the following functions if its body
	// is empty.

	FizzBuzzWithFeatureToggleTest() {
	// You can do set-up work for each test here.
	}

	virtual ~FizzBuzzWithFeatureToggleTest() {
	// You can do clean-up work that doesn't throw exceptions here.
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

TEST_F(FizzBuzzWithFeatureToggleTest, WhenCommonNumberThenSayItDirectly) {
	FizzBuzzHandler fizzBuzzHandler;
    fizzBuzzHandler.turnBodyMovementFeatureOff();
	EXPECT_EQ("1", fizzBuzzHandler.handle(1));
	EXPECT_EQ("49", fizzBuzzHandler.handle(49));
	EXPECT_EQ("98", fizzBuzzHandler.handle(98));
    fizzBuzzHandler.turnBodyMovementFeatureOn();
	EXPECT_EQ("1", fizzBuzzHandler.handle(1));
	EXPECT_EQ("49", fizzBuzzHandler.handle(49));
	EXPECT_EQ("98", fizzBuzzHandler.handle(98));
}

TEST_F(FizzBuzzWithFeatureToggleTest, WhenMultipleOf3ThenFizz) {
	FizzBuzzHandler fizzBuzzHandler;
    fizzBuzzHandler.turnBodyMovementFeatureOff();
	EXPECT_EQ("Fizz", fizzBuzzHandler.handle(3));
	EXPECT_EQ("Fizz", fizzBuzzHandler.handle(51));
	EXPECT_EQ("Fizz", fizzBuzzHandler.handle(99));
}

TEST_F(FizzBuzzWithFeatureToggleTest, GivenBodyMovementFeatureToggleIsOnWhenMultipleOf3ThenFizzAndTouchHead) {
	FizzBuzzHandler fizzBuzzHandler;
    fizzBuzzHandler.turnBodyMovementFeatureOn();
	EXPECT_EQ("FizzAndTouchHead", fizzBuzzHandler.handle(3));
	EXPECT_EQ("FizzAndTouchHead", fizzBuzzHandler.handle(51));
	EXPECT_EQ("FizzAndTouchHead", fizzBuzzHandler.handle(99));
}

}  // namespace


GTEST_API_ int main(int argc, char **argv) {
	printf("Running main() from gtest_main.cc\n");
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
