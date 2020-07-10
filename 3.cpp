#include <iostream>
using namespace std;
int SQR(int a) {
	int c = 0;
	for (int i = 1; i*i < a; i = i + 1) {
		c = i * i;
		cout << c << ' ';
	}
	return  c;
}

int main()
{
	cout << SQR(4);
	return 0;
}
