// Datei: test_hinten_anfuegen.cpp

#include "catch.h"

#include "CharListenKnoten.h"

TEST_CASE("Pruefung der hinten_anfuegen() Funktion")
{
	CharListenKnoten* anker = nullptr;
	int current_count = CharListenKnoten::object_count;

	hinten_anfuegen(anker, 'a');

	REQUIRE(anker != nullptr);
	REQUIRE(anker->get_data() == 'a');
	REQUIRE(anker->get_next() == nullptr);
	REQUIRE(CharListenKnoten::object_count == current_count + 1);

	int id_a = anker->get_my_id();
	CharListenKnoten* anker2 = anker;

	hinten_anfuegen(anker, 'b');

	REQUIRE(anker != nullptr);
	REQUIRE(anker->get_data() == 'a');
	REQUIRE(anker->get_next() != nullptr);
	REQUIRE(anker->get_my_id() == id_a);
	REQUIRE(anker->get_next()->get_data() == 'b');
	REQUIRE(anker->get_next()->get_next() == nullptr);
	REQUIRE(anker->get_next()->get_my_id() != id_a);
	REQUIRE(CharListenKnoten::object_count == current_count + 2);
}

