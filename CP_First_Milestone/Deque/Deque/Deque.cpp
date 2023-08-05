#include<iostream>
#include<deque>  //not guaranteed to store all its elements in contiguous storage locations
using namespace std;

int main() { //[], at(), back(), clear(), front(), pop_back(), push_back(), pop_front(), pop_back();
	//constant time of popping, pushing
	deque<int> first;
	deque<int> second(4, 100);
	deque<int> third(second.begin(), second.end());
	deque<int> fourth(third);

	int myints[] = { 16,2,77,29 };
	int n = sizeof(myints) / sizeof(int);

	deque<int> fifth(myints, myints + n);
}