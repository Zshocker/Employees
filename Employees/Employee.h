#pragma once
#include<iostream>
#include<fstream>
using namespace std;
namespace Entreprise {
	class Employee
	{
		static unsigned long MatInc;
		static float ValeurSalaire;
		string nom;
		unsigned long Matricule;
		float indiceSalarial;
	public:
		Employee(string nom, float ind);
		float Salary();
		void Print();
		virtual void Print(fstream& F);
		//virtual void PrintAllH();
		//virtual void PrintAllH(fstream& F);
	};
}
