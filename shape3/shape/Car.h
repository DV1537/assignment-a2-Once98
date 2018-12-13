#pragma once
#include <string>
using namespace std;
class Car
{
private:
	string carBrand;
	int horsePower;
public:
	Car(string carBrand = "BMW", int horsePower = 150);
	virtual ~Car();

	string getBrand() const;
	int getHorsePower() const;
	int totalHorsePower = myCar + MySecondCar;

	// �verlagrar >-tecknet f�r objekt av typen Car
	bool operator>(const Car& otherCar);
};

