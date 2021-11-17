#include <iostream>
#define CIMGGIP_MAIN
#include "CImgGIP05.h"
using namespace std;





int main()
{
	// Für das "blaue Spielfeld" ...
	const int left_border = 100;
	const int right_border = 500;
	

	// Für Ausdehnung und Position des weißen Quadrats ...
	int x = 450, y = 400;
	const int rectangle_size = 50;
	int delta = 10;
	gip_white_background();


	while (gip_window_not_closed())
	{

		//Animation nach Links
		for (x; x > 100; x += 0) {
		
		gip_draw_rectangle(
			left_border, 100, // linke obere Ecke
			right_border, 500, // rechte untere Ecke
			blue);

		gip_draw_rectangle(
			x, y, // linke obere Ecke
			x + rectangle_size, // rechte untere Ecke
			y + rectangle_size,
			white);

		gip_wait(100);
		x -= delta;
		}

		// Animation nach Rechts
		for (x; x < 450; x += 0) {

			gip_draw_rectangle(
				left_border, 100, // linke obere Ecke
				right_border, 500, // rechte untere Ecke
				blue);

			gip_draw_rectangle(
				x, y, // linke obere Ecke
				x + rectangle_size, // rechte untere Ecke
				y + rectangle_size,
				white);

			gip_wait(100);
			x += delta;
		}

	}

	return 0;
}