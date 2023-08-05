#include<iostream>
#include<queue>
using namespace std;

class Compare {
public:
	bool operator()(int a, int b) {   //operator overloading
		return a < b;
	}
};

int main() {
	int arr[] = { 10,15,20,25 };
	int n = sizeof(arr) / sizeof(int);

	//priority_queue<int> heap; // bu default it is maxHeap (max is prority)
	//priority_queue<int, vector<int>, greater<int> > heap; //this will get small as a priority  //greater is inBuilt, you can define your own
	priority_queue<int, vector<int>, Compare> heap;


	for (int x : arr) {
		heap.push(x);
	}

	while (!heap.empty()) {
		cout << heap.top() << endl;
		heap.pop();
	}

	return 0;
}