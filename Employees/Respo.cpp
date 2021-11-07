#include "Respo.h"
#include<iostream>
#include<fstream>
using namespace std;
using namespace Entreprise;
Entreprise::Respo::Respo(string nom, float ind, Respo** TabResp, int numRsp, Employee**TabEmp, int numEmp):Employee(nom,ind)
{
	this->numEmp = numEmp;
	this->TabRespo = TabResp;
	this->numRsp = numRsp;
	this->TabEmp = TabEmp;
}

void Entreprise::Respo::PrintDirectH()
{
	this->Print();
	cout << endl << " {";
	for (int i = 0; i < numRsp; i++)
	{
		TabRespo[i]->Print();
	}
	for (int i = 0; i < numEmp; i++)
	{
		TabEmp[i]->Print();
	}
	cout << " }" << endl;
}

void Entreprise::Respo::PrintAllH()
{
	this->Print();
	cout << " {" << endl;
	for (int i = 0; i < numRsp; i++)
	{
		if(!TabRespo[i]->TabRespo)TabRespo[i]->PrintDirectH();
		else TabRespo[i]->PrintAllH();
	}
	for (int i = 0; i < numEmp; i++)
	{
		TabEmp[i]->Print();
	}
	cout  << " }" << endl;
}

void Entreprise::Respo::PrintDirectH(fstream& F)
{
	this->Print(F);
	F << endl << " {";
	for (int i = 0; i < numRsp; i++)
	{
		TabRespo[i]->Print(F);
	}
	for (int i = 0; i < numEmp; i++)
	{
		TabEmp[i]->Print(F);
	}
	F << " }" << endl;
}

void Entreprise::Respo::PrintAllH(fstream& F)
{
	this->Print(F);
	F << " {" << endl;
	for (int i = 0; i < numRsp; i++)
	{
		if (!TabRespo[i]->TabRespo)TabRespo[i]->PrintDirectH(F);
		else TabRespo[i]->PrintAllH(F);
	}
	for (int i = 0; i < numEmp; i++)
	{
		TabEmp[i]->Print(F);
	}
	F << " }" << endl;
}
