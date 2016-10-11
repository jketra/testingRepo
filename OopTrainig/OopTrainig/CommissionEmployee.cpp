#include "stdafx.h"
using std::cout;
using std::endl;

#include "CommissionExployee.h"

CommissionEmployee::CommissionEmployee(const string& _firstName, const string& _lastName, const string& _sotialSecurityNumber,
	double _grossSales, double _commissionRate) : Employee(_firstName, _lastName, _sotialSecurityNumber),
	grossSales(_grossSales), commissionRate(_commissionRate) 
{
	//cout << "Comission constructor" << endl;
}

CommissionEmployee::~CommissionEmployee()
{
	//empty body
}

void CommissionEmployee::setGrossSales(const double& _grossSales)
{
	grossSales = _grossSales;
}

double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

void CommissionEmployee::setCommissionRate(const double& _commissionRate)
{
	commissionRate = _commissionRate;
}

double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

double CommissionEmployee::earnings() const
{
	return commissionRate * grossSales;
}

void CommissionEmployee::print() const
{
	cout << "comission employee: ";
	Employee::print();
	cout << "gross sales: $" << getGrossSales() << endl;
	cout << "commission rate: " << static_cast<int>(getCommissionRate() * 100 + 0.5)<<"%" << endl;
}




