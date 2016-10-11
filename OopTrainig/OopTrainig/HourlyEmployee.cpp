#include "stdafx.h"
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const string& _firstName, const string& _lastName, const string& _sotialSecurityNumber,
	double _hourlyWage, double _hoursWorked) : Employee(_firstName, _lastName, _sotialSecurityNumber), 
	hourlyWage(_hourlyWage), hoursWorked(_hoursWorked) {}

HourlyEmployee::~HourlyEmployee()
{
	//empty body;
}

void HourlyEmployee::setHourlyWage(const double& _hourlyWage)
{
	hourlyWage = (_hourlyWage <= 0.0) ? 0.0 : _hourlyWage;
}

double HourlyEmployee::getHourlyWage() const
{
	return hourlyWage;
}

void HourlyEmployee::setHoursWorked(const double& _hoursWorked)
{
	hoursWorked = (_hoursWorked <= 0.0) ? 0.0 : _hoursWorked;
}
double HourlyEmployee::getHoursWorked() const
{
	return hoursWorked;
}

double HourlyEmployee::earnings() const
{
	if (hoursWorked <= 40) return hourlyWage * hoursWorked;
	return 40 * hourlyWage + (hoursWorked - 40) * hourlyWage * overtimePct;
}

void HourlyEmployee::print() const
{
	cout << "Hourly employee: ";
	Employee::print();
	cout << "hourle wage: $" << getHourlyWage() << "    " << "hours worked: " << getHoursWorked() << "h" << endl;
}

double HourlyEmployee::overtimePct = 1.5;

void HourlyEmployee::setOvertimePct(double _overtimePct)
{
	overtimePct = _overtimePct;
}