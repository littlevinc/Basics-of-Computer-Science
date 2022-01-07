// 11-01_main.cpp

#include <iostream>
using namespace std;

#define CIMGGIP_MAIN
#include "CImgGIP06.h"

#include "MyRectangle.h"

int main()
{
	MyRectangle hintergrund(100, 100, 500, 500);
	MyRectangle ball(370, 310, 380, 320);
	MyRectangle schlaeger(200, 480, 250, 500);

	


	int direction_x = 10;
	int direction_y = 10;

	while (gip_window_not_closed())
	{
		
		// draw white background and blue playing field
		gip_background(255);
		hintergrund.draw_blue();

		ball.set_radius(direction_x, direction_y);
		ball.draw();

		// positioning of the driver onscreen
		if (gip_mouse_x() >= 125 && gip_mouse_x() <= 475) { // between left and right border
			schlaeger.setX1(gip_mouse_x() - 25);
			schlaeger.setX2(gip_mouse_x() + 25);
		}
		else if (gip_mouse_x() < 125) { // left border edge case
			schlaeger.setX1(100);
			schlaeger.setX2(150);
		}
		else if (gip_mouse_x() > 475) { // right border edge case
			schlaeger.setX1(450);
			schlaeger.setX2(500);
		}
		
		schlaeger.draw(); // draw the driver after postion is determined

		cout << gip_mouse_x() << endl; // debug console output for positioning of driver
	
		if (ball.does_not_collide_with(schlaeger) == false) {
			direction_x = direction_x * 1;
			direction_y = direction_y * -1;
		}

		// top border
		if (ball.getY1() + direction_y <= 100)  {
			direction_x = direction_x * 1;
			direction_y = direction_y * -1;
		} 

		// left border
		if (ball.getX1() + direction_x <= 100) {
			direction_x = direction_x * -1;
			direction_y = direction_y * 1;
		}

		// right border
		if (ball.getX2() + direction_x >= 500) {
			direction_x = direction_x * -1;
			direction_y = direction_y * 1;
		}
		
		// close window once the ball is out of the field
		if (ball.getY2() > 500) break;

		// Pausieren ...
		gip_sleep(1);
	}
	return 0;
}
