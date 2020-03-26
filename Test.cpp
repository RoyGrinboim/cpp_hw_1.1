#define CHECK DOCTEST_CHECK
#include "doctest.h"
#include "PhoneticFinder.hpp"

TEST_CASE("hello")//1
{
    CHECK(phonetic::find("hello world", "hello")=="hello");
}

TEST_CASE("world")//2
{
    CHECK(phonetic::find("hello vorld", "WORLD")=="vorld");
}

TEST_CASE("dond")//3
{
    CHECK(phonetic::find("Dond vorri be haffy", "dont")=="Dond");
}

TEST_CASE("vorri")//4
{
    CHECK(phonetic::find("Dond vorri be haffy", "worry")=="vorri");
}

TEST_CASE("be")//5
{
    CHECK(phonetic::find("Dond vorri be haffy", "be")=="be");
}

TEST_CASE("haffy")//6
{
    CHECK(phonetic::find("Dond vorri be haffy", "happy")=="haffy");
}

TEST_CASE("programing")//7
{
    CHECK(phonetic::find("cpp programing", "programING")=="programing");
}

