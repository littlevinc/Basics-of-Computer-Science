#pragma once

template <typename A, typename B> struct Tupel {
	A komponente1;
	B komponente2;
};


template <typename A, typename B>
int vergleiche(Tupel<A, B> tupelA, Tupel<A, B> tupelB) {

	if (tupelA.komponente1 < tupelB.komponente1 && tupelA.komponente2 < tupelB.komponente2) {
		return -1;
	}
	else if (tupelA.komponente1 > tupelB.komponente1 && tupelA.komponente2 > tupelB.komponente2) {
		return +1;
	}
	else {
		return 0;
	}

};

