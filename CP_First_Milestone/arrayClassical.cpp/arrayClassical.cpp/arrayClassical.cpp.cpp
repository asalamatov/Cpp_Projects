#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[] = { 1,3,3,4,3,5,345,3 };
	int n = sizeof(arr) / sizeof(int);
	//sort
	sort(arr, arr+n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}