#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	enum num { a = -1, b = -3, c = 2 };
	int count1 = 0, count2 = 0, count3 = 0, count = 0;

	if (a < 0) {
		count1 = 1;
	}
	if (b < 0) {
		count2 = 1;
	}
	if (c < 0) {
		count3 = 1;
	}
	count = count1 + count2 + count3;

	int s;
	s = abs(a + b + c);

	cout << "количество отрицательных чисел: " << count << endl;
	cout << "абсолютное значение суммы этих чисел: " << s << endl;

	return 0;
}
