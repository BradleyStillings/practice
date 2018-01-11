#include<iostream>
#include<string>
#include"Circle.h"
#include"Rectangle.h"

using namespace std;


class BasicShape
{
private: 
	double area;
public:
	void setArea(double);
	double getArea() const;		
};

double BasicShape::getArea() const
{
	return area;
}

long Circle::getcenterX() const
{
	return centerX;
}
long Circle::getcenterY() const
{
	return centerY;
}
double Circle::calcArea()
{
	return (3.14 * radius * radius);
}
long Rectangle::getWidth() const
{
	return width;
}
long Rectangle::getLength() const
{
	return length;
}
double Rectangle::calcArea()
{
	return width * length;
}


int main()
{
	long x;
	long y;
	long w;
	long l;
	double r;
	
	// circles values and it's calculations
	
	cout << "Enter The X coordinates of the Circle's center: ";
	cin >> x;
	cout << "Enter The Y coordinates of the Circle's center: ";
	cin >> y;
	cout << "Enter the radius of the Circle: ";
	cin >> r;
	
	Circle circ(x, y, r);
	cout << "The area is: " << circ.calcArea() << endl;
	
	cout << "Enter the width of the rectangle: ";
	cin >> w;
	cout << "Enter the length of the rectangle: ";
	cin >> l;
	
	// to create an object for Basic Shape's data
	Rectangle rect(w, l);
	cout << " Area of Rectangle is: " << rect.calcArea() << endl;
	
}
