int fibonachi(int a) {

	if (a == 0) return 0;
	if (a == 1) return 1;
	if (a > 1) {
		return fibonachi(a - 1) + fibonachi(a - 2);
	}
}

int fib(int n) {
	int array[n];
	array[0] = 0;
	array[1] = 1;
	for (int i = 2; i <= n; i++) {
		array[i] = array[i - 1] + array[i - 2];
	}
	return array[n-1];
}
void Array(int n, int x) {
	int ar[n];
	for (int i = 0; i <= n; i++) {
		ar[i] = i + x;
		cout << ar[i] << ' ';
	}
}
int main()
{ 
	fibonachi(4);
	return 0;
}
