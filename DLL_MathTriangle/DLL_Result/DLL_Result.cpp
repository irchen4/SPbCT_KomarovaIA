//DLL_Result.cpp
#include <iostream>
#include "Header_MathTriangle.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a = 0, b = 0, c = 0, alfa = 0, beta = 0, gamma = 0;
	cout << "Введите сторону треугольника = "; 	cin >> a;
	cout << "Введите угол a = "; 	cin >> alfa; 
	cout << "Введите угол b = "; 	cin >> beta; 

	cout << "Угол g = " <<
		MathFuncs::MyMathFuncs::Gamma(alfa, beta); cin >> gamma; 
	
	cout << "Площадь треугольника = " <<
		MathFuncs::MyMathFuncs::Area(alfa, beta, gamma, a);
	
	cout << "Сторона c = " <<
		MathFuncs::MyMathFuncs::Side(alfa, c);
	
	cout << "Сторона b = " <<
		MathFuncs::MyMathFuncs::Side(beta, b);

	cout << "Периметр треугольника = " <<
		MathFuncs::MyMathFuncs::Perimetr(a, b, c) << endl;

	return 0;
}