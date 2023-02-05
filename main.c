#include "integral.h"

int main()
{
	int n = 0, k = 0;
	double A, B, eps, S1 = 0, S2 = 0, delta;
	scanf_s("%lf %lf %d %lf", &A, &B, &n, &eps);
	S2 = rect(A, B, n);
	if (fabs(S2) < 1)
		k = 1;
	else
		k = 2;
	do
	{
		S1 = S2;
		n *= 2;
		S2 = rect(A, B, n);
		switch (k)
		{
		case 1:
			delta = fabs(S2 - S1);
		case 2:
			delta = fabs((S2 - S1) / S2);
		}

	} while (delta > eps);

	printf("%lf %lf %d", S2, delta, n );
	return 0;
}