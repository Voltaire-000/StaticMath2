#include "pch.h"
#include "..\MathLibrary\MathLibrary.h"

TEST(TestAddition, Add) {

	double a = 7.6;
	double b = 99;

	double resultAdd = MathLibrary::Arithmetic::Add(a, b);

	EXPECT_EQ(resultAdd, 106.6);
	EXPECT_TRUE(true);
}

TEST(TestSubtraction, Subtraction) {

	double a = 7.6;
	double b = 99;
	
	double resultSubtract = MathLibrary::Arithmetic::Subtract(b, a);

	EXPECT_EQ(resultSubtract, 91.4);
	EXPECT_TRUE(true);
}

TEST(TestMultiplication, Multiply) {

	double a = 2.5;
	double b = 99;

	double resultMultiply = MathLibrary::Arithmetic::Multiply(a, b);

	EXPECT_EQ(resultMultiply, 247.5);
	EXPECT_TRUE(true);
}

TEST(TestDivision, Divide) {

	double a = 2.5;
	double b = 99;

	double resultDivide = MathLibrary::Arithmetic::Divide(b, a);

	EXPECT_EQ(resultDivide, 39.6);
	EXPECT_TRUE(true);
}