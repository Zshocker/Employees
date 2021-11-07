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
		new Employee("ascd",140),
		new Employee("gfdfd",100),
	};
	Employee *E1[] = { 
		new Employee("MA", 100),
		new Employee("AB", 100),
	};
	Employee *E2[] = { 
		new Employee("Ss",120),
		new Employee("Hf",140),
	};
	Respo *R0[] = { 
		new Respo("Resp0",120,NULL,0,E2,2),
	};
	Respo *R1[] = { 
		new Respo("Resp01",120,R0,1,E4,3),
	};
	Respo *R[] = { 
		new Respo("Resp1",120,R1,1,E,3),
		new Respo("Resp2",140,NULL,0,E1,2)
	};
	Respo R2("Resp3", 154, R, 2, NULL, 0);
	fstream msd("File.dat");
	R2.PrintAllH(msd);
	msd.close();
}