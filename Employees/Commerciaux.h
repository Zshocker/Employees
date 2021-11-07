#pragma once
#include"Employee.h"
#include"Vente.h"
#include <iostream>
#include<list>
using namespace std;
namespace Entreprise {
	class Commerciaux :public Employee
	{
		static float proptionnelVent;
		list<Vente> Ventes;
	public:
		Commerciaux(string nom, float ind);
		void AjouterVente(const Vente& V);
		float Salary();
	};
}


