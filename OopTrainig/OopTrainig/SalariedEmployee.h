#pragma once

#ifndef SALARIED_H_
#define SALARIED_H_

#include "Employee.h"

class SalariedEmployee : public Employee
{
private:
	double weeklySalary;

public:
	SalariedEmployee(const string& _firstName, const string& _lastName, const string& _sotialSecurityNumber, 
		double _weeklySalary);
	virtual ~SalariedEmployee();
	
	void setWeeklySalary(const double& _weeklySalary);
	double getWeeklySalary() const;

	virtual double earnings() const;
	virtual void print() const;
};

#endif
