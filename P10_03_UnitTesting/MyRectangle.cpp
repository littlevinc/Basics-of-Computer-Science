#include "MyRectangle.h"
#define CIMGGIP_MAIN
#include "CImgGIP06Mock.h"

MyRectangle::MyRectangle(int tmp1, int tmp2, int tmp3, int tmp4) {
	this->x1 = tmp1;
	this->y1 = tmp2;
	this->x2 = tmp3;
	this->y2 = tmp4;
}

// setter methods
void MyRectangle::set(int tmp1, int tmp2, int tmp3, int tmp4) {
	this->x1 = tmp1;
	this->y1 = tmp2;
	this->x2 = tmp3;
	this->y2 = tmp4;
}

void MyRectangle::setX1(int tmp) {
	this->x1 = tmp;
}

void MyRectangle::setY1(int tmp) {
	this->y1 = tmp;
}

void MyRectangle::setX2(int tmp) {
	this->x2 = tmp;
}

void MyRectangle::setY2(int tmp) {
	this->y2 = tmp;
}

// getter mehtods
int MyRectangle::getX1() {
	return x1;
}

int MyRectangle::getY1() {
	return y1;
}

int MyRectangle::getX2() {
	return x2;
}

int MyRectangle::getY2() {
	return y2;
}

void MyRectangle::draw() const {
	gip_draw_rectangle(x1, y1, x2, y2, blue);
}

bool MyRectangle::does_not_collide_with(const MyRectangle& other) const {

	// catch all cases where a collision can not occur 
	if (this->x2 < other.x1 || other.x2 < this->x1 || other.y2 < this->y1 || this->y2 < other.y1) {
		return true;
	}
	else {
		return false;
	}

}






