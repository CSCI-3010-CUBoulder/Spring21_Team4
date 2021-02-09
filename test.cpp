#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("incrementing values in string vector", "[addN]") {
   std::cout<<"test"<<std::endl;
   std::vector<std::string> str{"hi","bye", "test space", "s", "2", "aaaaa", "...", ""};

  		std::string n="added string";
  		std::vector<std::string> res = AddN(str, n);

  		srand(time(NULL));
  		int random = rand()%res.size();
  		REQUIRE(str.size() == res.size());
  		REQUIRE( res[0] == "hiadded string" );
  		REQUIRE( res[str.size()-1] == "added string" );
  		REQUIRE(res[random] == str[random]+n);

}

TEST_CASE("subtracting values in integer vector", "[subtractN]"){
	std::vector<int> v{1,2,3,5,6,7,8,10};

	SECTION("checking with +ve n"){
		int n=5;
		std::vector<int> res = SubtractN(v, n);
		srand(time(NULL));
		int random = rand()%v.size();
		REQUIRE(v.size() == res.size());
		REQUIRE( res[0] == -4 );
		REQUIRE( res[v.size()-1] == 5 );
		REQUIRE(res[random] == v[random]-n);
	}
	SECTION("checking with -ve n"){
		int n=-5;
		std::vector<int> res = SubtractN(v, n);
		srand(time(NULL));
		int random = rand()%v.size();
		REQUIRE(v.size() == res.size());
		REQUIRE( res[0] == 6 );
		REQUIRE( res[v.size()-1] == 15 );
		REQUIRE(res[random] == v[random]-n);
	}

}
