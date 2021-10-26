// Header_MathTriangle.h
#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API __declspec(dllimport) 
#endif

namespace MathFuncs
{
	// This class is exported from the MathFuncsDll.dll
	class MyMathFuncs
	{
	public:
		static MATHFUNCSDLL_API double Gamma(double a, double b);
		static MATHFUNCSDLL_API double Area(double a, double b, double g, double st);
		static MATHFUNCSDLL_API double Side(double a, double b);
		static MATHFUNCSDLL_API double Perimetr(double a, double b, double c);
	};
}
