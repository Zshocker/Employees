#pragma once
#include "Employee.h"
#include<fstream>
namespace Entreprise {
    class Respo : public Employee
    {
        Respo **TabRespo;
        int numRsp;
        Employee **TabEmp;
        int numEmp;
    public :
        Respo(string nom,float ind, Respo**TabResp, int numRsp,Employee** TabEmp,int numEmp);
        void PrintDirectH();
        void PrintAllH();
        void PrintDirectH(fstream& F);
        void PrintAllH(fstream& F);
    };
}

