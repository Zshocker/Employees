#include "Respo.h"
#include<iostream>
#include<fstream>
using namespace std;
using namespace Entreprise;
Entreprise::Respo::Respo(string nom, float ind, Employee**TabEmp, int numEmp):Employee(nom,ind)
{
	this->numEmp = numEmp;
	this->TabEmp = TabEmp;
}

void Entreprise::Respo::PrintDirectH()
{
	this->Employee::Print();
	cout << endl << " {";
	for (int i = 0; i < numEmp; i++)
	{
		TabEmp[i]->Print();
	}
	cout << " }" << endl;
}

void Entreprise::Respo::PrintDirectH(fstream& F)
{
	this->Employee::Print(F);
	F << endl << " {";
	for (int i = 0; i < numEmp; i++)
	{
		TabEmp[i]->Print(F);
	}
	F << " }" << endl;
}

void Entreprise::Respo::Print(fstream& F)
{
	F << "\"Resp\": {" << endl;
	this->Employee::Print(F);
	F << ", \"Hierch\": {" << endl;
	for (int i = 0; i < numEmp; i++)
	{
		F << " \"fils" << i << "\": {" << endl;
		TabEmp[i]->Print(F);
		F << "}";
		if (i < numEmp - 1)F << ",";
		F << endl;
	}
	F << " }" << endl;
	F << " }" << endl;
}
