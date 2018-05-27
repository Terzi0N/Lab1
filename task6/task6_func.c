#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

float x, f;

void fun(void) {
	f = (1 - 1 / 4 * (pow(sin(2 * x), 2)) + cos(2 * x));
}