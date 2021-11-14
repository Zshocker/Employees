#include"Respo.h"
#include"Employee.h"
#include<iostream>
using namespace std;
using namespace Entreprise;
void main() {
	Employee *E[] = { 
		new Employee("SA",1200),
		new Employee("HS",1400),
		new Employee("HI",10458.0),
	};
	Employee *E4[] = { 
		new Employee("sadds",1220),
		new Respo("ascd",14230,E,3),
		new Employee("gfdfd",11500)
	};
	Employee *E1[] = { 
		new Employee("MA", 10120),
		new Respo("AB", 10130,E4,3)
	};
	Employee *E2[] = { 
		new Respo("Ss",12564.0,E1,2),
		new Employee("Hf",140.45),
	};
	Respo* R2 = new Respo("Direct", 170, E2, 2);
	fstream msd("File.json", ios::out|ios::trunc);
	msd << "{";
	R2->Print(msd);
	msd << "}";
	msd.close();
	cout<< Personnel::someSalary_verser();
}