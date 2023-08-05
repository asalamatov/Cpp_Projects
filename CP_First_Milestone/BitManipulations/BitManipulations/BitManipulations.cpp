#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int getIthBit(int n, int i) {
	int mask = (1 << i);
	return (n & mask) > 0 ? 1 : 0;
}

void clearIthBit(int &n, int i) {
	int mask = ~(1 << i);
	n = n & mask;
}

void setIthBit(int& n, int i) {
	int mask = (1 << i);
	n = (n | mask);
}

void updateIthBit(int& n, int i, int val) {
	clearIthBit(n, i);
	int mask = (val << i);
	n = n | mask;

}

void clearLastIBits(int& n, int i) {
	int mask = (~0 << i);
	n = n & mask;
}

void clearBitsInRange(int& n, int i, int j) {
	int a = (~0 << (j + 1));
	int b = ~(~0 << i);
	//int b = (1 << i) - 1;
	int mask = a | b;
	n = n & mask;

}

void replaceBits(int& n, int i, int j, int m) {
	clearBitsInRange(n, i, j);
	int mask = m << i;
	n = n | mask;
}

int countBits(int n) {
	int count = 0;
	while (n>0) {
		int last_bit = n & 1;
		count += last_bit;

		n = n >> 1;
	}
	return count;
}

int countBitsFaster(int n) {
	int count = 0;
	while (n > 0){
		n = (n & (n - 1));
		count++;
	}	
	return count;
}

int convertToBinary(int n) {
	int ans = 0;
	int p = 1;

	while (n > 0) {
		int last_bit = (n & 1);
		ans += p * last_bit;

		n = n >> 1;
		p *= 10;
	}
	return ans;
}

int main() {
	/*int n = 63;
	int i, j;
	cin >> j>>i;*/

	//cout<<"get: " << getIthBit(n, i) << endl;
	//cout << "n=" << n << "\n";
	//cin >> i;
	//clearIthBit(n, i);
	//cout << "clear: n=" << n<<endl;
	//cin >> i;
	//setIthBit(n, i);
	//cout << "Set: " << i << "'th bit: " << n;

	//cout <<endl<< "i: ";
	//cin >> i;
	//cout << endl<<"val: ";
	//int val;
	//cin >> val;
	//updateIthBit(n, i, val);
	//cout << "Update: " << i << "th bit with " << val << ": " << n;
	//cout << endl << "Clear last i bits, i: ";
	//cin >> i;
	//clearLastIBits(n, i);
	//cout << endl << "n=" << n << endl;
	//clearBitsInRange(n, i, j);
	//cout << endl << n;

	/*int N = 15;
	int i = 1;
	int j = 3;
	int m = 2;

	replaceBits(N, i = i, j = j, m = m);
	cout << N;*/

	/*int n;
	cin >> n;
	if ((n & (n - 1)) == 0) {
		cout << "the number is a power of 2!" << endl;
	}
	else {
		cout << "No it is not a power of 2;" << endl;
	}*/

	int n;
	cin >> n;
	/*
	cout << countBits(n)<<endl;
	cout << countBitsFaster(n);*/
	cout << convertToBinary(n);


	return 0;
}