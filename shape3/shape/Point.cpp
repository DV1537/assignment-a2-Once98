#include "Point.h"



Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

string Point::getType()
{
	return "Point";
}

Shape *Point::position()
{
	return this;
}

double Point::distance(Shape &otherShape)
{
	double dist = 0.0;
	Point *point = dynamic_cast<Point*>(otherShape.position());
	//Trianle *triangle = dynamic_cast<Triangle*>(otherShape);
	
	if (point != nullptr)
	{
		// c = roten ur(deltaX^2 + deltaY^2)
		dist = sqrt(pow(x - point->getX(), 2) + pow(y - point->getY(), 2));
	}

	return dist;
}

