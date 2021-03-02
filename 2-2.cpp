#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.1415923
int main()
{
	double a = 1.36;
	double x, y;
	cout << "Please input x : ";
	while (!(cin >> x)) {  //Проверить правильность ввода
		cout << "error\n";
		cin.clear();
		while (cin.get() != '\n') {
			continue;
		}
	}
	cin.get();

	if (x < 0.5) {
		y = PI / 2 + a * x - exp(a * x);
	}
	else {
		y = pow(x, 3) * a + 28;
	}

	cout << "y = : " << y;
	return 0;
}
