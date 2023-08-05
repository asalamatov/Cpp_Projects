///////////////////////////////////array stl

#include<iostream>
#include<array>
using namespace std;

void updateArray(array<int, 6>& arr1, int i, int val) {
	arr1[i] = val;
}

void print(const array<int, 6>& arr1) {
	int n = arr1.size();
	for (int i = 0; i < n; i++) {
		cout << arr1[i] << " ";
	}
}

int main() {
	array<int, 6> arr = { 1,2,3,4,5,6 };
	//arr[0] = 10;
	updateArray(arr, 0, 100);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
}

////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
	cout << "hi\n";
	printf("%.5f\n", 44.5434564323);
}


//////////////////////////////////////////classical array
#include<iostream>
using namespace std;

void updateArray(int arr[], int i, int val) {
	arr[i] = val;
}

void print(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[] = { 1,2,3,4,5 };

	int size = sizeof(arr) / sizeof(int);
	updateArray(arr, 0, 100);
	print(arr, size);

	return 0;
}


/////////////////////////////////

