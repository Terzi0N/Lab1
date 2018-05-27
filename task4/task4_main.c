#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>



void fun(double x, double *f)
{
	*f = (1 - 1 / 4 * (pow(sin(2 * x), 2)) + cos(2 * x));
}


int main() {
	double x, f;
	printf("x = ");
	scanf("%f", &x);
	fun(x, &f);
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%f", &x);
	fun(x, &f);
	printf("f(x) = %f \n", f);

	_getch();
	return 0;
}