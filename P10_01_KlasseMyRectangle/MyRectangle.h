#pragma once
class MyRectangle {
	
private:

	int x1 = 0, y1 = 0; // upper left corner
	int x2 = 20, y2 = 20; // lower right corner

public:

	// constructor
	MyRectangle(int tmp1, int tmp2, int tmp3, int tmp4) : x1{ tmp1 }, y1{ tmp2 }, x2{ tmp3 }, y2{ tmp4 } {};

	// setter methods
	void set(int tmp1, int tmp2, int tmp3, int tmp4);
	void setX1(int tmp);
	void setY1(int tmp);
	void setX2(int tmp);
	void setY2(int tmp);

	// getter mehtods
	int getX1();
	int getY1();
	int getX2();
	int getY2();

	void draw() const;

	bool does_not_collide_with(const MyRectangle& other) const;

	

};