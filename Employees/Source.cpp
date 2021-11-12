#include"Respo.h"
#include"Employee.h"
using namespace Entreprise;
void main() {
	Employee *E[] = { 
		new Employee("SA",120),
		new Employee("HS",140),
		new Employee("HI",100),
	};
	Employee *E4[] = { 
		new Employee("sadds",120),
		new Respo("ascd",140,E,3),
		new Employee("gfdfd",100)
	};
	Employee *E1[] = { 
		new Employee("MA", 100),
		new Respo("AB", 100,E4,3)
	};
	Employee *E2[] = { 
		new Respo("Ss",120,E1,2),
		new Employee("Hf",140),
	};
	Respo* R2 = new Respo("Direct", 170, E2, 2);
	fstream msd("File.json");
	msd << "{";
	R2->Print(msd);
	msd << "}";
	msd.close();
}