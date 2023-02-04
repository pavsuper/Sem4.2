#include "integral.h"

int main()
{
	int k, n;
	double S1 = 0, S2 = 0, A, B, eps;
	scanf("%lf %lf %d %lf", &A, &B, &n, &eps);
	S2 = rect(A, B, n);
	if (fabs(S2) < 1)
		k = 1;
	else
		k = 2;
	do
	{
		S1 = S2;
		n *= 2;
		S2 = S2 = rect(A, B, n);
	} while (	if (k == 1)
					fabs(S2 - S1) > eps;
				else
					fabs((S2 - S1)/S2) > eps;
			)
	return 0;
}