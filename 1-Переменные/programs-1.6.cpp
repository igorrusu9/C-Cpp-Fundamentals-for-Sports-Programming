#include <iostream>
using namespace std;

int main() {
	/* programm_1.6-1*/
	boul a;
	cin >> a;
	cout << a << endl;
	return 0;

/* programm_1.6-2
	long double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(10) << a / b << endl;
	return 0;*/

/* programm_1.6-3
	cout.setf(ios::fixed);
	cout.precision(0);

	long double a, b;
	cin >> a >> b;
	cout << a / b << endl;
	return 0;*/

/* programm_1.6-4
	cout.setf(ios::fixed);
	cout.precision(0);

	long double a;
	cin >> a;
	float b = a;
	long double c = b - a;
	cout << c << endl;
	return 0;*/
}