#include <sstream>
#include<cmath>
#include <fstream>
#include <string>
#include <iostream>
#include "Triangle.h"
#include "Line.h"
using namespace std;

// Funktionsdeklaration
void readFromFile(string fileLocation);


int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	
	Shape *p1 = new Point(0, 0);
	Shape *p2 = new Point(0, 5);
	Shape *p3 = new Point(10, 0);

	Point *pointOne = dynamic_cast<Point*>(p1);
	Point *pointTwo = dynamic_cast<Point*>(p2);
	Point *pointThree = dynamic_cast<Point*>(p3);


	Shape *l1 = new Line(*pointOne, *pointTwo);
	Shape *l2 = new Line(*pointOne, *pointTwo);

	
	Shape *t1 = new Triangle(*pointOne, *pointTwo, *pointThree);
	Shape *t2 = new Triangle(*pointOne, *pointTwo, *pointThree);


	// Distance between 2 points
	cout << "Distance between the points is: " << p1->distance(*p2) << endl;

	// Distance between 2 lines
	cout << "Distance between the lines is: " << l1->distance(*l2) << endl;

	// Distance between 2 triangles
	cout << "Distance between the triangles is: " << t1->distance(*t2) << endl;


	// Get the area of the triangle
	cout << "Area of triangle is: " << t1->circumreference() << endl;
	
	delete p1;
	delete p2;
	delete p3;
	delete l1;
	delete l2;
	delete t1;
	delete t2;

	return 0;
};


	
// Funktionsdefinition
void readFromFile(string fileLocation)
{
	std::ifstream infile("Points.txt");

	std::string line;
	while (std::getline(infile, line))
	{
		std::istringstream iss(line);
		int p, l, t;
		if (!(iss >> p >> l >> t)) { break; } 

		
	}

}

