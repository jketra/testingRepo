// OopTrainig.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionExployee.h"
#include "BasePlusCommissionExployee.h"

void virtualViaPointers(const Employee* ptrEmployee);
void virtualViaReference(const Employee& employee);

void mainCommission()
{
	cout << fixed << setprecision(2);

	vector<Employee*> employees(4);

	employees[0] = new SalariedEmployee("Jon", "Smith", "111-11-1111", 800);
	employees[1] = new HourlyEmployee("Karen", "Price", "222-22-2222", 16.75, 40);
	employees[2] = new CommissionEmployee("Seu", "Jons", "333-33-3333", 10000, .06);
	employees[3] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300);

	for (size_t i = 0; i < employees.size(); ++i)
	{
		virtualViaPointers(employees[i]);

		BasePlusCommissionEmployee* derivedPtr =
			dynamic_cast<BasePlusCommissionEmployee*>(employees[i]);

		if (derivedPtr != nullptr)
		{
			derivedPtr->setBaseSalary(derivedPtr->getBaseSalary() * 1.1);
			cout << "new base salary: " << derivedPtr->getBaseSalary();
		}

		cout << "Total salary: " << employees[i]->earnings();

		cout << endl << endl;
	}

	for (size_t i = 0; i < employees.size(); ++i)
	{
		cout << "delete object of " << typeid(*employees[i]).name() << endl;
		delete employees[i];
	}

	
}

int main()
{
	mainCommission();

	system("pause");
	return 0;
}

void virtualViaPointers(const Employee* ptrEmployee)
{
	ptrEmployee->print();
	cout << "earned: " << ptrEmployee->earnings() << endl;
}

void virtualViaReference(const Employee& employee)
{
	employee.print();
	cout << "earned: " << employee.earnings() << endl;
}