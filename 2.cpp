#include <iostream>
using namespace std;
int mod(int a, int b) {
	
	while (a >= b) {
		a = a - b;
	}
	return a;
}
int GCD(int a, int b) {
	if (b == 0)
		return a;
	return GCD(b, mod(a, b));
}
int main()
{
	cout << GCD(9, 15);
	return 0;
}
