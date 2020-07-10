#include <iostream>
using namespace std;
void SQR(int a) {
	int c = 0;
	for (int i = 1; i*i < a; i = i + 1) {
		c = i * i;
		cout << c << ' ';
	}
}

void F(int a) {

	for (int i = 1; i*i <= a; i++) {
		if (a % i == 0)
			cout << i << ' ' << a / i << ' ';

	}
}

void f(int a) {
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			cout << i << ' ';
	}
}

bool G(int a) {
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0)
			return false;
	}
	return true;
}
int main()
{ 
	cout << "started" << endl;
	cout << G(597331883);
	if (0)
		cout << "true";
	return 0;
}
