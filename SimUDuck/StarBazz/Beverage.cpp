#include "stdafx.h"
#include "Beverage.h"

string Beverage::getDescription() const
{
	return mDescription;
}


void Beverage::setDescription(const string& description)
{
	mDescription = description;
}

Espresso::Espresso()
{
	setDescription("Espresso");
}

double Espresso::cost() const
{
	return 1.99;
}

HouseBlend::HouseBlend()
{
	setDescription("House Blend Coffe");
}

double HouseBlend::cost() const
{
	return 1.99;
}