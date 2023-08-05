#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class person {
private:
	int weight;
public:
	person(int w = 0) {
		weight = w;
	}

	friend bool operator>(person x, person y);
	friend bool operator<(person x, person y);
};

bool operator > (person x, person y) {
	return x.weight > y.weight;
}

bool operator < (person x, person y) {
	return x.weight < y.weight;
}

int main() {
	int w1, w2;
	cin >> w1 >> w2;
	person Jon(w1);
	person Aza(w2);

	if (Jon > Aza) {
		cout<< "jon is heavier";
	}
	else {
		cout << "jon is lighter";
	}


	return 0;
}