#include <math.h>

double fun(double x) {
	return (1 - 1 / 4 * (pow(sin(2 * x), 2)) + cos(2 * x));
}