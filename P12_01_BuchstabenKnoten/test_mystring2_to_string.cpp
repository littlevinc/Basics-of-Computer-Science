// Datei: test_mystring2_to_string.cpp

#include <string>

#include "catch.h"

#include "MyString2.h"

TEST_CASE("Pruefung der Methode std::string MyString2::to_string()") {

	SECTION("MyString2::to_string() bei einem leeren MyString2") {
		MyString2 s;
		REQUIRE(s.to_string() == std::string(""));
	}

	SECTION("MyString2::to_string() bei einem nicht-leeren MyString2") {
		MyString2 s = std::string("abc");
		REQUIRE(s.to_string() == std::string("abc"));
	}
}