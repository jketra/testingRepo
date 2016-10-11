#include "stdafx.h"
using std::cout;
using std::endl;

#include "BasePlusCommissionExployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& _firstName, const string& _lastName,
	const string& _sotialSecurityNumber, double _grossSales, double _comissionRate, double _baseSalary) :
	CommissionEmployee(_firstName, _lastName, _sotialSecurityNumber, _grossSales, _comissionRate)
{
	setBaseSalary(_baseSalary); //проверить и инициализировать
	//cout << "Base plus constructor" << endl;
}

BasePlusCommissionEmployee::~BasePlusCommissionEmployee()
{
	//empty body
}

void BasePlusCommissionEmployee::setBaseSalary(const double& _baseSalary)
{
	baseSalary = (_baseSalary <= 0.0) ? 0.0 : _baseSalary;
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
	//return commissionRate * grossSales + baseSalary;
	return CommissionEmployee::earnings() + baseSalary;
}

void BasePlusCommissionEmployee::print() const
{
	cout << "base-salaried ";
	CommissionEmployee::print();
	cout << "Base salary: $" << getBaseSalary() << endl;
}

