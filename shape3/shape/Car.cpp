#include "Car.h"


Car::Car(string carBrand, int horsePower)
{
	this->carBrand = carBrand;
	this->horsePower = horsePower;
}

Car::~Car()
{
}

string Car::getBrand() const
{
	return carBrand;
}

int Car::getHorsePower() const
{
	return horsePower;
}

bool Car::operator>(const Car & otherCar)
{
	return (horsePower > otherCar.getHorsePower());
}
