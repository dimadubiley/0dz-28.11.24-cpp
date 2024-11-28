#include <iostream>
#include <string>
#include "Transport.h"

using namespace std;

int main()
{
	Avto obj ("Audio", 2000, 90, 4);
	obj.Print();
	cout << endl;
	Plain obj1 ("Plain", 2000, 90, 200);
	obj1.Print();
	cout << endl;
	Sydio obj2 ("Sydio", 2000, 90, 40);
	obj2.Print();
	cout << endl;
	Grus obj3("Grus", 2000, 90);
	obj3.Print();
	cout << endl;
	cout << endl;
}
