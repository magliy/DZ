#include <iostream>
#include <vector>
using namespace std;
struct Mas {
	vector<int> v;
	int size;
	void change();
	Mas(int n,int c) {
		vector<int> v.resize(n, c);
	}

	Mas(int arr[], int n) {
		vector<int> v.resize(n);
		for (int i = 0; i < n; i++) {
			v[i] = arr[i];
		}
	}
	
	void change(int array[],int n) {
		for (int i = 0; i < n; i++,n--) {
			v[i] = array[n-1];
			cout << v[i] << ' ';
		}
	}
	~Mas() {
		cout << "end";
	}

};

	int main()
	{
		int arr[4] = { 1,4,5,8 };
		Mas w(4,0);
//	Mas w(arr, 4);
		w.change(arr, 4);
		return 0;
	}
