#include "swapr.h"

void swapr(int&a, int&b)
{
	int temp = a;
	a = b;
	b = temp;
}
