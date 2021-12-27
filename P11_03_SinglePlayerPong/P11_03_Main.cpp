// 11-01_main.cpp

#include <iostream>
using namespace std;

#define CIMGGIP_MAIN
#include "CImgGIP06.h"

#include "MyRectangle.h"

int main()
{
	MyRectangle hintergrund(100, 100, 500, 500);
	MyRectangle ball(310, 310, 320, 320);
	MyRectangle schlaeger(200, 480, 250, 500);

	while (gip_window_not_closed())
	{
		int direction_x = 5;
		int direction_y = 5;

		// Alles neu zeichnen ...
		gip_background(255);
		hintergrund.draw_blue();

		ball.set_radius(direction_x, direction_y);
		ball.draw();

		if (gip_mouse_x() >= 125 && gip_mouse_x() <= 475) {
			schlaeger.setX1(gip_mouse_x() - 25);
			schlaeger.setX2(gip_mouse_x() + 25);
		}
		else if (gip_mouse_x() < 125) {
			schlaeger.setX1(100);
			schlaeger.setX2(150);
		}
		else if (gip_mouse_x() > 475) {
			schlaeger.setX1(450);
			schlaeger.setX2(500);
		}
		
		schlaeger.draw();
		cout << gip_mouse_x() << endl;

		if (ball.getY2() >= schlaeger.getY1()) {
			direction_y = direction_y * -1;
			direction_x = direction_x * -1;
		}


		
		if (ball.does_not_collide_with(schlaeger)) {
			gip_draw_text(10, 10, "Keine Kollision.");
		} else {
			direction_x = -5;
			direction_y = 5;
		}
		
		// close window once the ball is out of the field
		if (ball.getY2() > 500) break;

		/*
		MyRectangle r3 = r1 * 0.5;
		r3.draw_red();
		(r2 * 0.5).draw_red();
		*/

		// Pausieren ...
		gip_sleep(2);
	}
	return 0;
}
