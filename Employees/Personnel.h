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
		virtual float Salary()=0;
		static double someSalary_verser();
	};
}

