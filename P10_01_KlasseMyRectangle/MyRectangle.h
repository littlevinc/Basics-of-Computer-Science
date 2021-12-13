#pragma once
class MyRectangle {
	
private:

	int x1 = 0, y1 = 0;
	int x2 = 20, y2 = 20;

public:

	// constructor
	MyRectangle(int tmp1, int tmp2, int tmp3, int tmp4);

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

};