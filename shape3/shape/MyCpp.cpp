#include <iostream>
#include "Car.h"
using namespace std;

int main() {

	Car *myCar = new Car("Audi", 350);
	Car *MySecondCar = new Car("Passat", 150);

	// Här använder vi vanliga >-tecknet för att jämföra två heltal
	if (myCar->getHorsePower() > MySecondCar->getHorsePower())
	{
		cout << myCar->getBrand() << " > " << MySecondCar->getBrand() << endl;
	}
	else
	{
		cout << MySecondCar->getBrand() << " < " << myCar->getBrand() << endl;
	}
	
	//  Här använder vi >-tecknet som vi överlagrade i klassen Car
	if (myCar > MySecondCar)
	{
		cout << myCar->getBrand() << " > " << MySecondCar->getBrand() << endl;
	}
	else
	{
		cout << MySecondCar->getBrand() << " < " << myCar->getBrand() << endl;
	}




	return 0;
}