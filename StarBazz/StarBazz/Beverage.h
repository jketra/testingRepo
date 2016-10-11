#pragma once
#ifndef BEVERAGE_H_
#define BEVERAGE_H_

#include <string>
using std::string;

class Beverage
{
private:
	string mDescription = "Unknown Beverage";
public:
	virtual string getDescription() const;
	virtual double cost() const = 0;
protected:
	void setDescription(const string& description);
};

class Espresso : public Beverage
{
public:
	Espresso();
	virtual double cost() const;
};

class HouseBlend : public Beverage
{
public:
	HouseBlend();
	virtual double cost() const;
};

#endif // !BEVERAGE_H_
