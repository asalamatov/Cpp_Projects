#include<iostream>
#include<array>
#include<algorithm>
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
	array<int, 6> arr = { 1,2,3,4,50,16 };
	//arr[0] = 10;
	updateArray(arr, 0, 100);

	//Sort 
	sort(arr.begin(), arr.end());
	
	//fill
	array<int, 10> fives;
	fives.fill(5);

	for (int i = 0; i < fives.size(); i++) {
		cout << fives[i] << " ";
	}

	// for each loop
	cout << "\n";
	for (int x : fives) {
		cout << x << ",";
	}



	cout << "\n";

	//front & back
	cout << arr.front();
	cout << endl;
	cout << arr.back();
	cout << endl;


	//print
	print(arr);
}