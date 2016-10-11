#pragma once
#ifndef DECORATOR_H_
#define DECORATOR_H_

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
	virtual string getDescription() const = 0;
};

class Mocha : public CondimentDecorator
{
private:
	const Beverage* mBeverage;
public:
	Mocha(const Beverage* beverage);
	virtual string getDescription() const;
	virtual double cost() const;
};

class Soy : public CondimentDecorator
{
private:
	const Beverage* mBeverage;
public:
	Soy(const Beverage* beverage);
	virtual string getDescription() const;
	virtual double cost() const;
};

class Whip : public CondimentDecorator
{
private:
	const Beverage* mBeverage;
public:
	Whip(const Beverage* beverage);
	virtual string getDescription() const;
	virtual double cost() const;
};

#endif // !DECORATOR_H_
