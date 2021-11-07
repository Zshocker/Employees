#include "Commerciaux.h"
#include<iostream>
#include<list>
using namespace std;
using namespace Entreprise;
Entreprise::Commerciaux::Commerciaux(string nom, float ind) :Employee(nom, ind) {}

void Entreprise::Commerciaux::AjouterVente(const Vente& V)
{
	this->Ventes.push_front(V);
}

float Entreprise::Commerciaux::Salary()
{
	float res = 0;
	for (list<Vente>::iterator i = Ventes.begin(); i != Ventes.end(); i++)
	{
		res += i->CalculeSum();
	}
	return this->Employee::Salary() + res;
}

