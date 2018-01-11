/* sets info for rectangle that is derived from BasicShape Class */

#ifndef Rectangle_H
#define Rectangle_H

#include<string>

class Rectangle 
{
private:
	long width;
	long length;

public: 
	// default constructor
	Rectangle(long w, long l)
	{
		width = w;
		length = l;
	}
long getWidth() const;
long getLength() const;
double calcArea();
};
#endif 
// ends Rectangle_H






