#include "Line.h"


Line::Line()
{

}

Line::Line(Point a, Point b)
{
	this->a = new Point(a.getX(), a.getY());
	this->b = new Point(b.getX(), b.getX());
	this->center = new Point(b.getX() - a.getX(), b.getY() - a.getY());
}


Line::~Line()
{
	delete a;
	delete b;
	delete center;
}

string Line::getType()
{
	return "Line";
}

Shape *Line::position()
{
	return center;
}

double Line::distance(Shape &otherShape)
{
	double dist = 0.0;

	Point *otherCenter = dynamic_cast<Point*>(otherShape.position());
	
	
	dist = sqrt( pow(center->getX() - otherCenter->getX(), 2) + pow(center->getY() - otherCenter->getY(), 2));
	
	return dist;
}
