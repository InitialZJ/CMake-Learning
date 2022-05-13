#include <iostream>
#include "swapr.h"
using  namespace std;

int main()
{
	int a = 3, b = 5;
	cout << "a = " << a << ", b = " << b << endl;

	// 调用swap函数，交换a和b的值
	swapr(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	return 0;
}
