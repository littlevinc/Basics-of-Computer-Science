#include "MyFilledRectangle.h"
#include "CImgGIP06.h"

void MyFilledRectangle::draw_inner_red()  {
	if ((this->getX2() - this->getX1()) >= 5 && (this->getY2() - this->getY1()) >= 5) {
		for (int y = this->getY1() + 2; y < this->getY2() - 2; y++) {
			gip_draw_line(int(this->getX1()) + 2, y, int(this->getX2()) - 2, y, red);
		}
	}
}