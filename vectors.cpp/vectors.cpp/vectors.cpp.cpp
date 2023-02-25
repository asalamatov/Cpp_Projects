#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	//when doubling operation happens, the time becomes linear to N, but on average vector uses constant time
	// we can use reserve in the beginning;
	// [], clear(), pop_back(), push_back(), reserve(), size()

	// empty container constructor
	//vector<int> first;  //double when added if full

	//first.push_back(20);
	//first.pop_back();
	//first.clear();
	//first.erase(first.begin() + 3); //erases the 4th element
	//first.erase(first.begin(), first.begin() + 3);

	// fill constructor
	//vector<int> second(4, 20);

	// range constructor (from array)
	//int numbers[] = { 1,2,3,4,5,6 };
	//vector<int> third(numbers, numbers + 4);

	// copy constructor
	//vector<int> fourth(third);

	// another way
	//vector<int> fifth = { 1,2,3,4,5,6 };

	// other methods
	//arr.at(i)
	//arr[i]
	//arr.size()
	//arr.capacity()
	//arr.max_size()



	vector<int> v;
	v.reserve(100);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;
		v.push_back(no);
		//cout << "Capacity: " << v.capacity() << "\n Size: " << v.size()<<endl;
	}

	for (int x : v){
		cout << x << ",";
	}


}