// Datei: test_mystring2_at.cpp

#include <string>

#include "catch.h"

#include "MyString2.h"

TEST_CASE("Pruefung der Methode char MyString2::at(unsigned int pos)") {

	SECTION("MyString2::at() bei einem leeren MyString2") {
		MyString2 s;
		REQUIRE(s.at(0) == '\0');
		REQUIRE(s.at(99) == '\0');
	}

	SECTION("MyString2::at() bei einem nicht-leeren MyString2") {
		MyString2 s = std::string{ "abc" };
		REQUIRE(s.at(0) == 'a');
		REQUIRE(s.at(1) == 'b');
		REQUIRE(s.at(2) == 'c');
		REQUIRE(s.at(3) == '\0');
		REQUIRE(s.at(4) == '\0');
		REQUIRE(s.at(5) == '\0');
		REQUIRE(s.at(99) == '\0');
	}
}
