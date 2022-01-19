// Datei: test_mystring2_length.cpp

#include <string>

#include "catch.h"

#include "MyString2.h"

TEST_CASE("Pruefung der Methode unsigned int MyString2::length()") {

	SECTION("MyString2::length() bei einem leeren MyString2") {
		MyString2 s;
		REQUIRE(s.length() == 0);
	}

	SECTION("MyString2::length() bei einem nicht-leeren MyString2") {
		MyString2 s = std::string{ "abc" };
		REQUIRE(s.length() == 3);
	}
}
