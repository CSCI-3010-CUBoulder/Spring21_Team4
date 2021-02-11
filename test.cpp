#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <iostream>
#include <string>
#include <vector>

TEST_CASE("returns -1 if the number is negative and 1 if positive", "[Sign]") {
    int number = 10;
    int number2 = -10;

    REQUIRE(Sign(number) == 1);
    REQUIRE(Sign(number2) == -1);
    
    return 0;
}