#pragma once

class MyRectangle {

protected:

	double x1, y1; // upper left corner
	double x2, y2; // lower right corner

public:

	// constructor
	MyRectangle(double tmp1 = 0, double tmp2 = 0, double tmp3 = 20, double tmp4 = 20) : x1{ tmp1 }, y1{ tmp2 }, x2{ tmp3 }, y2{ tmp4 } {};

	// setter methods
	void set(double tmp1, double tmp2, double tmp3, double tmp4);
	void setX1(double tmp);
	void setY1(double tmp);
	void setX2(double tmp);
	void setY2(double tmp);

	// getter mehtods
	double getX1();
	double getY1();
	double getX2();
	double getY2();

	void draw() const;
	void draw_red() const;

	bool does_not_collide_with(const MyRectangle& other) const;

	MyRectangle operator * (double d) {
		double new_x = (this->x2 - this->x1) * d + this->x1;
		double new_y = (this->y2 - this->y1) * d + this->y1;

		MyRectangle* result = new MyRectangle(this->x1, this->y1, new_x, new_y);

		return *result;
	}
};