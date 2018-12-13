#include "Triangle.h"



Triangle::Triangle()
{
	
}

Triangle::Triangle(Point a, Point b, Point c)
{
	this->a = new Point(a.getX(), a.getY());
	this->b = new Point(b.getX(), b.getX());
	this->c = new Point(c.getX(), c.getX());

	int centerX = (a.getX() + b.getX() + c.getX()) / 3;
	int centerY = (a.getY() + b.getY() + c.getY()) / 3;
	this->center = new Point(centerX, centerY);
}


Triangle::~Triangle()
{
	delete a;
	delete b;
	delete c;
	delete center;
}

string Triangle::getType()
{
	return "Triangle";
}

double Triangle::area()
{
	double width = 0.0;
	double height = 0.0;
	Shape *pointC = new Point(*c);

	Shape *centerOfAC = new Point((c->getX() + a->getX() / 2, c->getY() + a->getY() / 2));

	width = a->distance(*pointC);
	height = centerOfAC->distance(*b);

	delete pointC;
	delete centerOfAC;
	return width * height / 2;
}

double Triangle::circumreference()
{
	Shape *pointA = new Point(*a);
	Shape *pointB = new Point(*a);
	Shape *pointC = new Point(*a);

	int AB = pointA->distance(*pointB);
	int BC = pointB->distance(*pointC);
	int CA = pointC->distance(*pointA);


	cout << AB << " + " << BC << " + " << CA << endl;
	
	delete pointA;
	delete pointB;
	delete pointC;

	return AB + BC + CA;
}

Shape * Triangle::position()
{
	return center;
}

bool Triangle::isConvex()
{
	return false;
}

double Triangle::distance(Shape & otherShape)
{
	double dist = 0.0;

	Point *otherCenter = dynamic_cast<Point*>(otherShape.position());


	dist = sqrt(pow(center->getX() - otherCenter->getX(), 2) + pow(center->getY() - otherCenter->getY(), 2));
	
	return dist;
}