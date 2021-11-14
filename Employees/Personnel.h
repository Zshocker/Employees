#pragma once
#include<iostream>
#include<list>
using namespace std;
namespace Entreprise {
	class Personnel
	{
		static list<Personnel*> AllEmp;
	protected:
		Personnel();
	public:
		virtual float Salary();
		static double someSalary_verser();
	};
}

