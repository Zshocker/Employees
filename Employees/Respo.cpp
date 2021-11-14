#include "Respo.h"
#include<iostream>
#include<fstream>
using namespace std;
using namespace Entreprise;
Entreprise::Respo::Respo(string nom, float ind, Employee**TabEm, int numEmp):Employee(nom,ind)
{
	for (int i = 0; i < numEmp; i++)
	{
		this->add_emp(TabEm[i]);
	}
}

Entreprise::Respo::Respo(string nom, float ind, list<Employee*>& TabEmp) :Employee(nom, ind)
{
	this->TabEmp = TabEmp;
}

Entreprise::Respo::Respo(string nom, float ind, Employee* Emp) : Employee(nom, ind)
{
	TabEmp.push_front(Emp);
}

void Entreprise::Respo::add_emp(Employee* Emp)
{
	bool notFound = (std::find(TabEmp.begin(), TabEmp.end(), Emp) == TabEmp.end());
	if (notFound)TabEmp.push_front(Emp);
	else cout << "neglected one emp because it already existes in the Hierchi" << endl;
}

void Entreprise::Respo::remove_emp(Employee* Emp)
{
	bool notFound = (std::find(TabEmp.begin(), TabEmp.end(), Emp) == TabEmp.end());
	if (notFound)cout << "Emp doesn't exist in the Hierchi" << endl;
	else TabEmp.remove(Emp);
}

void Entreprise::Respo::PrintDirectH()
{
	this->Employee::Print();
	cout << endl << " {";
	for (list<Employee*>::iterator i = TabEmp.begin(); i != TabEmp.end(); i++)
	{
		(*i)->Print();
	}
	cout << " }" << endl;
}

void Entreprise::Respo::PrintDirectH(fstream& F)
{
	this->Employee::Print(F);
	F << endl << " {";
	for (list<Employee*>::iterator i = TabEmp.begin(); i != TabEmp.end(); i++)
	{
		(*i)->Print(F);
	}
	F << " }" << endl;
}

void Entreprise::Respo::Print(fstream& F)
{
	F << "\"Resp\": {" << endl;
	this->Employee::Print(F);
	F << ", \"Hierch\": {" << endl;
	int size = TabEmp.size();
	int i=0;
	for (list<Employee*>::iterator it = TabEmp.begin() ; it != TabEmp.end(); it++)
	{
		F << " \"fils" << i << "\": {" << endl;
		(*it)->Print(F);
		F << "}";
		if (i <size- 1)F << ",";
		F << endl;
		i++;
	}
	F << " }" << endl;
	F << " }" << endl;
}
