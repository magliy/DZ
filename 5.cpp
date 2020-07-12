struct M {
	int* mas;
	int size;
	int x;
	int mnogochlen();
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
	
	int mnogochlen(int x) {
		int v = 1;
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum = sum + mas[i] * v;
			v = v * x;
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
		
		int arr[4] = { 1,4,5,8 };
		M v(arr, 4);
		v[0] = 0;
		cout << v.mnogochlen(2)<<' ';
		return 0;
	}
