#include "CppUTest/TestHarness.h"

#include "factorial.h"

TEST_GROUP(factorial)
{

};
TEST(factorial, factorialofzero)
{
    CHECK_EQUAL(1, factorial(0));
}
TEST(factorial, factorialofpositivenum)
{
    CHECK_EQUAL(120, factorial(5));
}


