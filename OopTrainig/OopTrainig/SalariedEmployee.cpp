#include "stdafx.h"
#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const string& _firstName, const string& _lastName, const string& _sotialSecurityNumber,
	double _weeklySalary) : Employee(_firstName, _lastName, _sotialSecurityNumber), weeklySalary(_weeklySalary) {}

SalariedEmployee::~SalariedEmployee()
{
	//empty body
}

void SalariedEmployee::setWeeklySalary(const double& _weeklySalary)
{
	weeklySalary = _weeklySalary;
}

double SalariedEmployee::getWeeklySalary() const
{
	return weeklySalary;
}

double SalariedEmployee::earnings() const
{
	return getWeeklySalary();
}

void SalariedEmployee::print() const
{
	cout << "Salaried employee: ";
	Employee::print();
	cout << "weekly salary: $" << getWeeklySalary() << endl;
}