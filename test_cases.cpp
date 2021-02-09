#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

int Sign(int num){
    if(num > 0){
        return 1; 
    }
    else{
        return -1; 
    }
}


TEST_CASE( "Signs are computed", "[sign]" ) {
    REQUIRE( Sign(1) == 1 );
    REQUIRE( Sign(100) == 1 );
    REQUIRE( Sign(-5) == -1 );
    REQUIRE( Sign(-100) == -1 );
}


double SignDbl(double num){
    if(num > 0.0){
        return 1.0;
    }
    else{
        return -1.0;
    }
}

TEST_CASE( "Double signs are computed", "[signDbl]" ) {
    REQUIRE( SignDbl(1.0) == 1 );
    REQUIRE( SignDbl(100.0) == 1 );
    REQUIRE( SignDbl(-5.0) == -1 );
    REQUIRE( SignDbl(-100.0) == -1 );
}