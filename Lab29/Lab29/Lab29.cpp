#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	cout << "\na = "; cin >> a;
	cout << "\nb = "; cin >> b;
	cout << "\nc = "; cin >> c;
	if(a == b && a == c) cout << "\n Треугольник равносторонний";
	else cout << "\n Треугольник не равносторонний.";
}
