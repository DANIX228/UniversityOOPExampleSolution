#pragma once
#include "Human.h"

class Worker : public Human
{
private:
	double salary;

public:
	Worker() {
		cout << "default constructor of Worker" << endl;
	}

	~Worker() {
		cout << "destructor of Worker" << endl;
	}

	double getSalary();
	void setSalary(double salary);

	string getInfo();
};

