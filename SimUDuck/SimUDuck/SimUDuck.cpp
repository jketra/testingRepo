// SimUDuck.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "..\StarBazz\Beverage.h"
#include "..\StarBazz\Decorator.h"
#include <iomanip>


class FlyBehavior
{
public:
	virtual void fly() = 0
	{}
};

class FlyWithWings : public FlyBehavior
{
public:
	virtual void fly()
	{
		std::cout << "I am flying!";
	}
};

class FlyNoWay : public FlyBehavior
{
public:
	virtual void fly()
	{
		std::cout << "I can't fly!";
	}
};

class FlyRocketPowered : public FlyBehavior
{
public:
	virtual void fly()
	{
		std::cout << "I am flying with a rocket!";
	}
};


//class QuackBehavior;

class Duck
{
protected:
	FlyBehavior* flyBehavior;
//	QuackBehavior* quackBehavior;
public:
	Duck()
	{}
	void performFly();
	void setFlyBehavior(FlyBehavior* fb);
//	void performQuack();
	virtual void display() const {}
	virtual ~Duck() = 0 { std::cout << "~Duck" << std::endl; }
};

void Duck::performFly()
{
	flyBehavior->fly();
}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
	delete flyBehavior;
	flyBehavior = fb;
}

class ModelDuck : public Duck
{
public:
	ModelDuck()
	{
		flyBehavior = new FlyNoWay();
	}

	virtual void display() const;

	~ModelDuck()
	{
		delete flyBehavior;
	}
};

void ModelDuck::display() const
{
	std::cout << "I am Model Duck";
}

class MallarDuck : public Duck
{
public:
	MallarDuck()
	{
		flyBehavior = new FlyWithWings();
	}

   virtual void display() const
	{
		std::cout << "I am Mallar Duck";
	}

	~MallarDuck()
	{
		std::cout << "~MallarDuck" << std::endl;
		delete flyBehavior;
	}
};

class RubberDuck : public Duck
{
public:
	RubberDuck()
	{
		flyBehavior = new FlyNoWay();
	}

	virtual void display() const
	{
		std::cout << "I am Rubber Duck";
	}

	~RubberDuck()
	{
		std::cout << "~RubberDuck" << std::endl;
		delete flyBehavior;
	}
};

using std::cout;
using std::endl;
using std::fixed;

int main()
{
	cout << "------------------ BEVERAGE --------------------" << endl;
	Beverage* beverage1 = new Espresso();
	cout << fixed << std::setprecision(2);
	cout << beverage1->getDescription() << ": $" << beverage1->cost() << endl << endl;

	Beverage* beverage2 = new HouseBlend();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Soy(beverage2);
	beverage2 = new Whip(beverage2);

	cout << beverage2->getDescription() << ": $" << beverage2->cost() << endl << endl;

	cout << "\n------------------ Duck --------------------" << endl;
	/*Duck* rd = new RubberDuck();
	Duck* md = new MallarDuck();

	{
		RubberDuck rd1;
		MallarDuck md1;

		rd->display();
		std::cout << std::endl;
		rd1.display();
		std::cout << std::endl;
		rd->performFly();
		std::cout << std::endl;
		rd1.performFly();
		std::cout << std::endl << std::endl;

		md->display();
		std::cout << std::endl;
		md1.display();
		std::cout << std::endl;
		md->performFly();
		std::cout << std::endl;
		md1.performFly();
		std::cout << std::endl << std::endl;
	}
	
	std::cout << "\n-----------------------------------\n";

	delete rd;

	delete md;*/
	{
		ModelDuck model;
		model.display();
		std::cout << std::endl;
		model.performFly();
		std::cout << std::endl;
		model.setFlyBehavior(new FlyRocketPowered());
		model.performFly();
		std::cout << std::endl << std::endl;
	}

	Duck* model = new ModelDuck;
	model->display();
	std::cout << std::endl;
	model->performFly();
	std::cout << std::endl;
	model->setFlyBehavior(new FlyRocketPowered());
	model->performFly();
	std::cout << std::endl << std::endl;

	system("pause");
	return 0;
}

