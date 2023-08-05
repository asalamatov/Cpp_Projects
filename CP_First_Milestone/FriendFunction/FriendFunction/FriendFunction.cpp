#include<iostream>
using namespace std;

class Alpha {
private:
	int a1;
public:
	Alpha(int a) {
		a1 = a;
	}
	friend void fun();
	friend class Beta;
};

class Beta {
private:
	int b1;
public:
	Beta(int b) {
		b1 = b;
	}

	int sum() {
		Alpha a(b1);

		return a.a1 + b1;
	}



	friend void fun();
};

void fun() {
	Alpha a(8);
	Beta b(2);
	int sum = a.a1 + b.b1;
	cout << sum << endl;
}

int main() {
	//fun();
	Beta b(15);
	cout << b.sum();

}