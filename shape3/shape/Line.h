#pragma once
#include "Point.h"

class Line : public Shape
{
private:
	Point *a;
	Point *b;
	Point *center;
public:
	Line();
	Line(Point a, Point b);
	virtual ~Line();
	string getType();
	Shape* position();
	double distance(Shape &otherShape);
};