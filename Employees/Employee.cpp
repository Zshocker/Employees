#include "Employee.h"
#include<iostream>
using namespace std;
using namespace Entreprise;
unsigned long  Employee::MatInc = 0;
float Employee::ValeurSalaire=1;
Entreprise::Employee::Employee(string nom, float ind):Matricule(++MatInc)
{
	this->nom = nom;
	this->indiceSalarial = ind;
}

float Entreprise::Employee::Salary()
{
	return indiceSalarial*ValeurSalaire;
}

void Entreprise::Employee::Print()
{
	cout << "Mat :" << this->Matricule << " Nom :" << this->nom << " Salaire :" << this->Salary();
}

void Entreprise::Employee::Print(fstream& F)
{
	F << "\"Emp\" :{ \"Mat\" :" << this->Matricule << ", \"Nom\" :\" " << this->nom << "\", \"Salaire\" :" << this->Salary()<<" } ";
}

