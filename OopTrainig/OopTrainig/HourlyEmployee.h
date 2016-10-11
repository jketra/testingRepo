#pragma once
#ifndef HOURLY_H_
#define HOURLY_H_

#include "Employee.h"

class HourlyEmployee : public Employee
{
private:
	double hourlyWage;
	double hoursWorked;
	static double overtimePct;

public:
	HourlyEmployee(const string& _firstName, const string& _lastName, const string& _sotialSecurityNumber,
		double _hourlyWage, double _hoursWorked);
	virtual ~HourlyEmployee();

	void setHourlyWage(const double& _hourlyWage);
	double getHourlyWage() const;

	void setHoursWorked(const double& _hoursWorked);
	double getHoursWorked() const;

	virtual double earnings() const;
	virtual void print() const;

	static void setOvertimePct(double _overtimePct);
};

#endif // HOURLY_H_



