#include "Vente.h"

Vente::Vente(list<float>& values)
{
	this->values = values;
}

float Vente::CalculeSum()
{
	float res = 0;
	for (list<float>::iterator it = values.begin(); it != values.end() ; it++)
	{
		res += *it;
	}
	return res;
}
