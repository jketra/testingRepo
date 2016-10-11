#include "stdafx.h"
#include "Decorator.h"

Mocha::Mocha(const Beverage* beverage) 
{
	mBeverage = beverage;
}

string Mocha::getDescription() const
{
	return mBeverage->getDescription() + ", Mocha";
}

double Mocha::cost() const
{
	return .20 + mBeverage->cost();
}

Soy::Soy(const Beverage* beverage)
{
	mBeverage = beverage;
}

string Soy::getDescription() const
{
	return mBeverage->getDescription() + ", Soy";
}

double Soy::cost() const
{
	return .20 + mBeverage->cost();
}

Whip::Whip(const Beverage* beverage)
{
	mBeverage = beverage;
}

string Whip::getDescription() const
{
	return mBeverage->getDescription() + ", Whip";
}

double Whip::cost() const
{
	return .10 + mBeverage->cost();
}