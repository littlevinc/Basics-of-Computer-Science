#include "MyRectangle.h"
#include "CImgGIP06.h"
#define CIMGGIP_MAIN

// setter methods
void MyRectangle::set(double tmp1, double tmp2, double tmp3, double tmp4) {
	this->x1 = tmp1;
	this->y1 = tmp2;
	this->x2 = tmp3;
	this->y2 = tmp4;
}

void MyRectangle::setX1(double tmp) {
	this->x1 = tmp;
}

void MyRectangle::setY1(double tmp) {
	this->y1 = tmp;
}

void MyRectangle::setX2(double tmp) {
	this->x2 = tmp;
}

void MyRectangle::setY2(double tmp) {
	this->y2 = tmp;
}

// getter mehtods
double MyRectangle::getX1() {
	return x1;
}

double MyRectangle::getY1() {
	return y1;
}

double MyRectangle::getX2() {
	return x2;
}

double MyRectangle::getY2() {
	return y2;
}

// draw methods
void MyRectangle::draw() const {
	gip_draw_rectangle(x1, y1, x2, y2, blue);
}

void MyRectangle::draw_red() const {
	gip_draw_rectangle(x1, y1, x2, y2, red);
}

// collision detection
bool MyRectangle::does_not_collide_with(const MyRectangle& other) const {

	// catch all cases where a collision can not occur 
	if (this->x2 < other.x1 || other.x2 < this->x1 || other.y2 < this->y1 || this->y2 < other.y1) {
		return true;
	}
	else {
		return false;
	}

}








