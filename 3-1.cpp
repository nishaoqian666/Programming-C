#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, y;
	x = 0;
	while (x <= 1) {
		y = sqrt(1 - x) - tan(x);
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		x = x + 0.1;
	}
	return 0;
}

