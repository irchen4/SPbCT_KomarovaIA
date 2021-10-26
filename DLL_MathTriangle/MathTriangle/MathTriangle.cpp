// MathTriangle.cpp : Defines the exported functions for the DLL application.
#define _USE_MATH_DEFINES
#include "Header_MathTriangle.h"
#include <stdexcept>
#include <math.h>
using namespace std;

namespace MathFuncs
{
	double MyMathFuncs::Gamma(double a, double b)
	{
		a = a* M_PI/180;
		b = b * M_PI / 180;
		return (M_PI - (a + b))*(180/ M_PI);
	}
	
	double MyMathFuncs::Area(double a, double b, double g, double st)
	{
		a = a * (M_PI / 180);
		b = b * (M_PI / 180);
		g = g * (M_PI / 180);

		return 0.5 * (st*st) * (sin(b)*sin(g)/sin(a));
	}
	double MyMathFuncs::Side(double a, double b)
	{
		a = a * M_PI / 180;
		return b/sin(a);
	}
	double MyMathFuncs::Perimetr(double a, double b, double c)
	{
		return a + b + c;
	}
}
