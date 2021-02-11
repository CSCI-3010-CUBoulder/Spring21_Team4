CXX = g++ 
CXXFLAGS = -std=c++17 -Wall

all: test

clean:
	rm catch.o test

test_cases: catch.o test_cases.cpp
	$(CXX) $(CXXFLAGS) test_cases.cpp catch.o -o test

catch.o: test_cases.cpp
	$(CXX) $(CXXFLAGS) -c test_cases.cpp
