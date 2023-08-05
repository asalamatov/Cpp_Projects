#include<iostream>

using namespace std;


class Alpha {
private: 
	int a, b;
public:
	Alpha() {
		a = 5;
		b = 5;
	}
	static int stat; //allocates the same memory space for any class object

	static int getStat() {  // can work only with stat;
		stat++;
		return stat;
	}
};

int Alpha::stat = 0;

int main() {
	Alpha::getStat();
	Alpha dog;
	cout << dog.getStat()<<endl;
	Alpha cat;
	cout << cat.getStat() << endl;
	cout << Alpha::stat<<endl;
	cout << Alpha::getStat();






	return 0;
}