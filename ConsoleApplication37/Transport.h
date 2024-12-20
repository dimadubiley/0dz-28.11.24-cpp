#pragma once
#include <iostream>
using namespace std;
class Transport
{
protected:
	string name;
	double weight;
	int fuelCon;
	double prise;
public:
	Transport(){}
	Transport(string n, double w, int f)
	{
		name = n;
		weight = w;
		fuelCon = f;
		prise = 0.0;
	}
	virtual void Print()
	{
		cout << "Name: " << name
			<< "\t Weight: " << weight
			<< "\t Fuel consumption: " << fuelCon
			<< "\t Prise: " << prise;
	}
	virtual double getPrise() const = 0;
};

class Avto : public Transport
{
	int numPass;
public:
	Avto(){}
	Avto(string n, double w, int f, int num) :Transport(n, w, f), numPass(num)
	{
		numPass = num;
		prise = 15'000;
	}
};

class Plain : public Transport
{
	int numPass;
public:
	Plain() {}
	Plain(string n, double w, int f, int num) :Transport(n, w, f), numPass(num)
	{
		numPass = num;
		prise = 45'000;
	}
};

class Sydio : public Transport
{
	int numPass;
public:
	Sydio() {}
	Sydio(string n, double w, int f, int num) :Transport(n, w, f), numPass(num)
	{
		numPass = num;
		prise = 25'000;
	}
};

class Grus : public Transport
{
public:
	Grus() {}
	Grus(string n, double w, int f) :Transport(n, w, f)
	{
		prise = 30'000;
	}
};