/* 9. Circle Class
 Write a Circle class that has the following member variables:
 + radius: a double
 + pi: a double initialized with the value 3.14159
 The class should have the following member functions:
 +) default constructor. A default constructor that sets radius to 0.0.
 +) Constructor. Accepts the radius of the circle as an argument.
 +) setRadius. A mutator function for the radius variable.
 +) getRadius. An accessor function for the radius variable.
 +) getArea. Returns the area of the circle, which is calculated as 
 area = pi * radius * radius
 +) getDiameter. Returns the diameter of the circle, which is calculated as 
 diameter = radius * 2
 +) getCircumference. Returns the circumference of the circle, which is calculated as 
 circumference = 2 * pi * radius
 Write a program that demonstrates the Circle class by asking the user for the circle's radius, creating a Circle objec, and the reporting the circle's area,
 diameter, and circumference. */
 
 #include<iostream>
 
 using namespace std;
 
class Circle
{
	private:
		double radius;
		const double pi = 3.14159;
		
	public:
	Circle()					// constructor
	{
		radius = 0.0;
	}
	
	Circle(double radius)
	{
	this->radius = radius;																
	}
	void setRadius(double radius)			// mutator
	{
		this->radius = radius;
	}
	double getRadius() const				// accesor
	{
		return radius;
	}
	double getArea() const
	{
		return pi * radius * radius;
	}
	double getDiameter() const
	{
		return radius * 2;
	}
	double getCircumference() const
	{
		return (2 * pi * radius);
	}

};

int main()
{
Circle measurements;
const double pi = 3.14159;
	double radius;
	
cout << "Enter the circle's radius ";			// user input
cin >> radius;
measurements.setRadius(radius);
cout << "The Area of the given circle is\n" << measurements.getArea() << endl << endl;						// calls function to return area 
cout << "The Diameter of the given circle is " << measurements.getDiameter() << endl << endl;				// calls function to return diameter 
cout << "The Circumference of the given circle is " << measurements.getCircumference() << endl << endl;		// calls function to return circumference

return 0;																														
}

