#pragma once
#include "MyRectangle.h"

class MyFilledRectangle : public MyRectangle {

private:

public:
	MyFilledRectangle(double tmp1, double tmp2, double tmp3, double tmp4) : MyRectangle( tmp1, tmp2, tmp3, tmp4) {};

	void draw_inner_red();
	// evtl erg�nzung einer Methode die das Rote f�llen den Rechtecks �bernimmt
};