#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	bool x_neg = false, y_neg = false;
	if (x < 0)
		x_neg = true;
	if (y < 0)
		y_neg = true;

	if (x_neg) {
		if (y_neg) 
			cout << "3" << endl;
		else
			cout << "2" << endl;
	}
	else {
		if (y_neg)
			cout << "4" << endl;
		else
			cout << "1" << endl;
	}
	return 0;
}