#pragma once
#include "Employee.h"
#include<list>
#include<fstream>
using namespace std;
namespace Entreprise {
    class Respo : public Employee
    {
        list<Employee*> TabEmp;
       // Employee **TabEmp;
    public :
        Respo(string nom,float ind, Employee** TabEmp,int numEmp);
        Respo(string nom,float ind, list<Employee*>& TabEmp);
        Respo(string nom,float ind, Employee*Emp);
        void add_emp(Employee*Emp);
        void remove_emp(Employee*Emp);
        void PrintDirectH();
        void PrintDirectH(fstream& F);
        void Print(fstream& F);
    };
}

