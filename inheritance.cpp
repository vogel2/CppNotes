#include <iostream>
using namespace std;

class Shape {
public:
	float Area() {};
	string color;
};

class Rectangle : public Shape {
	double length;
	double width;

public:
	Rectangle(double l, double w, string c) {
		length = l;
		width = w;
		color = c;
	}

	float Area()
	{ 
		return length * width; 
	}
};


int main()
{
	
	return 0;
}

