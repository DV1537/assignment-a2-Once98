#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;
class Point : public Shape
{
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0);
	virtual ~Point();
	int getX();
	int getY();
	string getType();
	Shape *position();
	double distance(Shape &otherShape);
};