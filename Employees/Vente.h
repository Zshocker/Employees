#pragma once
#include<iostream>
#include<list>
using namespace std;
class Vente
{
	list<float> values;
public:
	Vente(list<float>& values);
	float CalculeSum();
};

