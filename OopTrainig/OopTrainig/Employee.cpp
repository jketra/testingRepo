#include "stdafx.h"
#include "Employee.h"

Employee::Employee(const string& _firstName, const string& _lastName, const string& _sotialSecurityNumber) :
	firstName(_firstName), lastName(_lastName), sotialSecurityNumber(_sotialSecurityNumber) 
{
	//cout << "Employee constructor" << endl;
}

Employee::~Employee()
{
}

void Employee::setFirstName(const string& _firstName)
{
	firstName = _firstName; //должно проверяться
}

string Employee::getFirstName() const
{
	return firstName;
}

void Employee::setLastName(const string& _lastName)
{
	lastName = _lastName; //должно проверяться
}

string Employee::getLastName() const
{
	return lastName;
}

void Employee::setSotialSecurityNumber(const string& _sotialSecurityNumber)
{
	sotialSecurityNumber = _sotialSecurityNumber; //должно проверяться
}

string Employee::getSotialSecurityNumber() const
{
	return sotialSecurityNumber;
}

void Employee::print() const
{
	cout << getFirstName() << " " << getLastName() << endl;
	cout << "sotial security number: " << getSotialSecurityNumber() << endl;
}