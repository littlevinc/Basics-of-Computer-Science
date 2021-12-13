class MyRectangle {

// class attributes
private: 
	int x1 = 0, y1 = 0; 
	int x2 = 20, y2 = 20;

public:
	MyRectangle(int tmp1, int tmp2, int tmp3, int tmp4) {
		this->x1 = ;
		this->y1 = 0;
		this->x2 = 20;
		this->y2 = 20;


	}
		
	// setter methods
	void set(int tmp1, int tmp2, int tmp3, int tmp4) {
		this->x1 = tmp1;
		this->y1 = tmp2;
		this->x2 = tmp3;
		this->y2 = tmp4;
	}

	void setX1(int tmp) {
		this->x1 = tmp;
	}

	void setY1(int tmp) {
		this->y1 = tmp;
	}

	void setX2(int tmp) {
		this->x2 = tmp;
	}

	void setY2(int tmp) {
		this->y2 = tmp;
	}

	// getter mehtods
	int getX1() {
		return x1;
	}

	int getY1() {
		return y1;
	}

	int getX2() {
		return x2;
	}

	int getY2() {
		return y2;
	}

};