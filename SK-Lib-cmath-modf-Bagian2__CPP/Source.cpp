// CPP program to demonstrate
// exception of this function
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	// Take any value
	double p, fraction;
	string k = "5.06";

	// Breaks k into two parts
	fraction = modf(k, &p);

	cout << "Integer Value = " << p << endl << "Fraction Value = " << fraction << endl;

	return 0;
}
