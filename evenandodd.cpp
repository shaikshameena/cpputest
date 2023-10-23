#include "CppUTest/TestHarness.h"
#include "evenandodd.h"

TEST_GROUP(evenoradd) 
{

};

TEST(evenoradd, checknumiseven) 
{
    CHECK_EQUAL(0, evenandodd(6));
}

TEST(evenoradd, checknumisodd) 
{
    CHECK_EQUAL(1, evenandodd(7));
}

TEST(evenoradd, checknumiszero) 
{
    CHECK_EQUAL(-1, evenandodd(0));
}

