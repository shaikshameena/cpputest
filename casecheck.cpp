#include "CppUTest/TestHarness.h"

#include "casecheck.h"

TEST_GROUP(casechecking)
{

};
TEST(casechecking, uppercase)
{
    CHECK_EQUAL(1, casecheck('A'));
}
TEST(casechecking, lowecase)
{
    CHECK_EQUAL(0, casecheck('a'));
}
TEST(casechecking, number)
{
    CHECK_EQUAL(2, casecheck('0'));
}
TEST(casechecking, special)
{
    CHECK_EQUAL(3, casecheck('-'));
}
