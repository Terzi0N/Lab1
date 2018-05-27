#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main() {
	double x, f;
	x = 5;
	printf("x = 5 ");
	
	f = (1 - 1 / 4 * (pow(sin(2 * x), 2)) + cos(2 * x));
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%f", &x);
	f = (1 - 1 / 4 * (pow(sin(2 * x), 2)) + cos(2 * x));
	printf("f(x) = %f \n", f);

	_getch();
	return 0;
}