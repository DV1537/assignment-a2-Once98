#pragma once
#include <string>


using namespace std;
class Shape
{
private:
	    //polygon and triangle specific condition
		
public:

	Shape();
	virtual ~Shape();

	// Create public virtual functions
	virtual string getType() = 0; // pure virtual for printing shape's type
	virtual double area();   // virtual area function returns default null
	virtual double circumreference();
	virtual Shape *position() = 0;
	virtual bool isConvex();
	virtual double distance(Shape &otherShape) = 0;
};