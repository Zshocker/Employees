#pragma once
#include "Employee.h"
#include<fstream>
namespace Entreprise {
    class Respo : public Employee
    {
        Employee **TabEmp;
        int numEmp;
    public :
        Respo(string nom,float ind, Employee** TabEmp,int numEmp);
        void PrintDirectH();
        void PrintDirectH(fstream& F);
        void Print(fstream& F);
    };
}

