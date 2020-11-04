#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y); // прототип

int main()
{
	double r, s;
	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;


	double m = (pow(g(r, s * s + 1), 2) + g(1, r * r + s)) / (1 - g(1, r * s));
	cout << "m = " << m << endl;

	system("pause");
	return 0;
}


double g(const double x, const double y) // визначення
{
	return ((sin(x) * sin(x) + cos(x) * cos(x)) / (1 - abs(x * y)));
   // return (1. / (1 - abs(x*y)) ); // --- cкорочена форма виразу (результат однаковий)
}