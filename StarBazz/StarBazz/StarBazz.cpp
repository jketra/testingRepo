// StarBazz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <iomanip>
using namespace std;

#include "Decorator.h"

int main()
{
	Beverage* beverage1 = new Espresso();
	cout << fixed << setprecision(2);
	cout << beverage1->getDescription() << ": $" << beverage1->cost() << endl << endl;

	Beverage* beverage2 = new HouseBlend();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Soy(beverage2);
	beverage2 = new Whip(beverage2);

	cout << beverage2->getDescription() << ": $" << beverage2->cost() << endl << endl;
	
	system("pause");
	return 0;
}

