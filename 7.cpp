struct M {
	int* mas;
	int size;
	int x;
	int proizvodnya();
	M(int n) {
		mas = new int[n];
		size = n;
		for (int i = 0; i < n; i++) {
			mas[i] = 0;
		}
	}
	M(int arr[], int n) {
		mas = new int[n];
		size = n;
		for (int i = 0; i < n; i++) {
			mas[i] = arr[i];
		}
	}
	int& operator[] (int i) {
		return mas[i];
	}
	
	int proizviodnya(int x) {
		int v = 1;
		int sum = 0;
		for (int i = 1; i < size; i++) {
			sum = sum + mas[i] * v;
			v = v*x ;
		}
		return sum;
	}
	
		~M() {
			cout << "end" << endl;
			delete[] mas;
		}
	};
  int main()
{

	int arr[6] = { 1,4,5,8,0,3 };
	M v(arr, 6);
	cout << v.proizviodnya(1) << ' ';
	return 0;
}

