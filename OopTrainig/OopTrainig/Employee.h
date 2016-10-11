#include "stdafx.h"
#pragma once

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
using std::cout;
using std::endl;

#include <string>
using std::string;

class Employee
{
private:
	string firstName;
	string lastName;
	string sotialSecurityNumber;

public:
	Employee(const string& _firstName, const string& _lastName, const string& _sotialSecurityNumber);

	virtual ~Employee();

	void setFirstName(const string& _firstName);
	string getFirstName() const;

	void setLastName(const string& _lastName);
	string getLastName() const;

	void setSotialSecurityNumber(const string& _sotialSecurityNumber);
	string getSotialSecurityNumber() const;

	virtual double earnings() const = 0;
	virtual void print() const;
};

#endif // !EMPLOYEE_H_

