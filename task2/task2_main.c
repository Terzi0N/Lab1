#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double fun(double x) {
	return (1 - 1 / 4 * (pow(sin(2 * x), 2)) + cos(2 * x));
}

int main() {
	double x, f;
	printf("x = ");
	scanf("%f", &x);
	f = fun(x);
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%f", &x);
	f = fun(x);
	printf("f(x) = %f \n", f);

	_getch();
	return 0;
}