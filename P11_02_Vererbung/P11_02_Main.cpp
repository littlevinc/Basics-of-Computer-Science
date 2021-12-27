// 11-01_main.cpp

#include <iostream>
using namespace std;

#define CIMGGIP_MAIN
#include "CImgGIP06.h"

#include "MyFilledRectangle.h"

int main()
{
	while (gip_window_not_closed())
	{
		int x1_1 = gip_random(0, gip_win_size_x);
		int y1_1 = gip_random(0, gip_win_size_y);
		int x2_1 = gip_random(x1_1, gip_win_size_x);
		int y2_1 = gip_random(y1_1, gip_win_size_y);
		MyFilledRectangle r1(x1_1, y1_1, x2_1, y2_1);

		int x1_2 = gip_random(0, gip_win_size_x);
		int y1_2 = gip_random(0, gip_win_size_y);
		int x2_2 = gip_random(x1_2, gip_win_size_x);
		int y2_2 = gip_random(y1_2, gip_win_size_y);
		MyFilledRectangle r2(x1_2, y1_2, x2_2, y2_2);

		// Alles neu zeichnen ...
		gip_white_background();
		r1.draw();
		if ((r1.getX2() - r1.getX1()) >= 5 && (r1.getY2() - r1.getY1()) >= 5) {
			for (int y = r1.getY1() + 2; y < r1.getY2() - 2; y++) {
				gip_draw_line(int(r1.getX1()) + 2, y, int(r1.getX2()) - 2, y, red);
			}
		}
		

		r2.draw();
		if ((r2.getX2() - r2.getX1()) >= 5 && (r2.getY2() - r2.getY1()) >= 5) {
			for (int y = r2.getY1() + 2; y < r2.getY2() - 2; y++) {
				gip_draw_line(int(r2.getX1()) + 2, y, int(r2.getX2()) - 2, y, red);
			}
		}

		if (r1.does_not_collide_with(r2))
			gip_draw_text(10, 10, "Keine Kollision.");
		else
			gip_draw_text(10, 10, "Kollision!");

		/*
		MyRectangle r3 = r1 * 0.5;
		r3.draw_red();
		(r2 * 0.5).draw_red();
		*/


		// Pausieren ...
		gip_sleep(4);
	}
	return 0;
}
