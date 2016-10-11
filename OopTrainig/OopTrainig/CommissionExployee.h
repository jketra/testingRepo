#pragma once
#ifndef COMMISSION_H_
#define COMMISSION_H_

#include "Employee.h"

class CommissionEmployee : public Employee
{
private:
	double grossSales; //продажи за неделю
	double commissionRate; //комиссионный процент

public: 
	CommissionEmployee(const string& _firstName, const string& _lastName, const string& _sotialSecurityNumber,
		double _grossSales = 0.0, double _comissionRate = 0.0);

	virtual ~CommissionEmployee();
	
	void setGrossSales(const double& _grossSales);
	double getGrossSales() const;

	void setCommissionRate(const double& _commissionRate);
	double getCommissionRate() const;

	virtual double earnings() const; //вычислить зароботок
	virtual void print() const; //напечатать объект CE

};

#endif