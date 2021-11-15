#include "Personnel.h"
#include<list>
using namespace std;
using namespace Entreprise;
list<Personnel*> Personnel::AllEmp;
Entreprise::Personnel::Personnel()
{
	AllEmp.push_front(this);
}
double Entreprise::Personnel::someSalary_verser()
{
    double res=0;
	for (list<Personnel*>::iterator i = Personnel::AllEmp.begin(); i != AllEmp.end(); i++)
	{
		if(*i)res += (*i)->Salary();
	}
	return res;
}
