#include <iostream>
#include "Car.h"
using namespace std;

int main() {

	Car *myCar = new Car("Audi", 350);
	Car *MySecondCar = new Car("Passat", 150);

	// H�r anv�nder vi vanliga >-tecknet f�r att j�mf�ra tv� heltal
	if (myCar->getHorsePower() > MySecondCar->getHorsePower())
	{
		cout << myCar->getBrand() << " > " << MySecondCar->getBrand() << endl;
	}
	else
	{
		cout << MySecondCar->getBrand() << " < " << myCar->getBrand() << endl;
	}
	
	//  H�r anv�nder vi >-tecknet som vi �verlagrade i klassen Car
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