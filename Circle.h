/* Defines the BasucShape derived Circle Class */ 
#ifndef Circle_H
#define Circle_H

#include<string>

class Circle 
{
private:
	long centerX;
	long centerY;
	double radius;
public:
	Circle(long x, long y, double r)
	{
		centerX = x;
		centerY = y;
		radius = r;
	}
	long getcenterX() const;
	long getcenterY() const;
	
	double calcArea();
		
};
#endif 
// Circle_H

