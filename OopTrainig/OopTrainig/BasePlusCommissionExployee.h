#pragma once
#ifndef BASEPLUS_H_
#define BASEPLUS_H_

#include "CommissionExployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
private:
	double baseSalary;

public:
	BasePlusCommissionEmployee(const string& _firstName, const string& _lastName, const string& _sotialSecurityNumber,
		double _grossSales = 0.0, double _comissionRate = 0.0, double _baseSalary = 0.0);
	virtual ~BasePlusCommissionEmployee();
	void setBaseSalary(const double& _baseSalary);
	double getBaseSalary() const;
	virtual double earnings() const;
	virtual void print() const;
};


#endif // !BasePlus_H_

