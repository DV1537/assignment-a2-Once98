#pragma once
#include "Shape.h"
#include "Point.h"
#include <iostream>
using namespace std;

class Triangle : public Shape
{
private:

	Point *a;
	Point *b;
	Point *c;
	Point *center;
public:
	Triangle();
	Triangle(Point a, Point b, Point c);
	virtual ~Triangle();
	string getType();
	double area();
	double circumreference();
	Shape *position();
	bool isConvex();
	double distance(Shape &otherShape);
};

