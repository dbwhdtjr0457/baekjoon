#include <iostream>
using namespace std;

int main() {
	int year;
	cin >> year;
	bool leap = true;
	if (year % 4 != 0)
		leap = false;
	else if (year % 100 == 0 && year % 400 != 0)
		leap = false;
	cout << leap << endl;
	return 0;
}