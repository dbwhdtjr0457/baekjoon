#include <iostream>
using namespace std;

int main() {
	int a1, a2;
	int a3, a4, a5, a6;

	cin >> a1 >> a2;
	
	int a2_1, a2_2, a2_3;
	a2_1 = a2 % 10;
	a2_2 = (a2 / 10) % 10;
	a2_3 = (a2 / 100) % 10;

	a3 = a1 * a2_1;
	a4 = a1 * a2_2;
	a5 = a1 * a2_3;
	a6 = a1 * a2;

	cout << a3 << endl;
	cout << a4 << endl;
	cout << a5 << endl;
	cout << a6 << endl;
}