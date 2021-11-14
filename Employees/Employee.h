#pragma once
#include<iostream>
#include<fstream>
#include"Personnel.h"
using namespace std;
namespace Entreprise {
	class Employee:	public Personnel
	{
		static unsigned long MatInc;
		static float ValeurSalaire;
		string nom;
		unsigned long Matricule;
		float indiceSalarial;
	public:
		Employee(string nom, float ind);
		virtual float Salary();
		void Print();
		virtual void Print(fstream& F);
	};
}
