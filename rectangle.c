#include "integral.h"

double rect(double a, double b, int n)
{
	double S = 0, x, h = (b - a) / (n + 1);
	for (x = a; x <= b - h; x += h)
	{
		S+= func(x + h / 2);
	}
	S*= h;
	
}