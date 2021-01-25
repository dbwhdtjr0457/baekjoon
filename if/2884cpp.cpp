#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int c, d;
	if (b < 45) {
		d = b + 15;
		if (a == 0)
			c = 23;
		else
			c = a - 1;
	}
	else {
		c = a;
		d = b - 45;
	}
	cout << c << " " << d << endl;
	return 0;
}