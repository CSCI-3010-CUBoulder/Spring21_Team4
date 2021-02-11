#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <iostream>
#include <string>
#include <vector>


TEST_CASE("multiply each element in vector together", "[Product]"){
    std::vector<int> v {1,2,3,4};
    std::vector<int> v_1 {5,4};
    std::vector<int> v_2 {2,0};
    std::vector<int> v_3 {100, 20, 6, 5, 0};
    std::vector<int> v_4 {1, 500};

    CHECK(Product(v) == 24);
    REQUIRE(Product(v_1) == 20);
    REQUIRE(Product(v_2) == 0);
    REQUIRE(Product(v_3) == 0);
    REQUIRE(Product(v_4) == 500);
}

TEST_CASE("returns -1 if the number is negative and 1 if positive", "[Sign]") {
    int number = 10;
    int number2 = -10;

    REQUIRE(Sign(number) == 1);
    REQUIRE(Sign(number2) == -1);
}