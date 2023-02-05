#include "integral.h"

int main()
{
	int k = 0, n = 0, n0 = 0;
	double sq[2] = { 0 }, delta = 1, A, B, eps;
	scanf("%lf %lf %d %lf", &A, &B, &n0, &eps);
	n = n0;
	for  (k = 0; delta > eps; n *= 2, k ^= 1)
	{
		double h = (B - A) / n;
		double s = rect(A, B, n);
		sq[k] = s * h;
		if (n > n0)
			delta = fabs(sq[k] - sq[k ^ 1]) / 3.0;
	}
	printf("%lf %lf %d", sq[k]* sq[k], eps, n / 2);
	return 0;
}