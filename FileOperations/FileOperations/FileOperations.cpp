#include<iostream>
#include<fstream>

using namespace std;

int main() {
	//ofstream fout;
	//ifstream fin;
	//char ch;



	//fout.open("my.txt");
	//fout.open("my.txt", ios::app);
	//fin >> ch;
	//int pos;
	//pos = fin.tellg();
	//pos = fout.tellp();
	//cout << pos<<endl;

	//fout << "\nThe third Line\n";
	//pos = fout.tellp();
	//cout << pos << endl;

	/*fin >> ch;
	pos = fin.tellg();
	cout << pos;*/

	/*while (!fin.eof()) {
		cout << ch;
		fin >> ch;
	}*/

	//fout << "Azamat\nAcademy";
	/*
	ifstream fin;
	char A[10];   //character array A of size 10

	fin.open("my.txt");
	for (int i = 0; i < 10; i++) {
		A[i] = 0;
	}
	fin.seekg(-4, ios_base::end);
	fin.read(A, 4);   // pointer to an array where the extracted characters are stored and the number of chars to extract
	for (int i = 0; A[i] != 0; i++) {
		cout << A[i];
	}
	fin.close();*/

	ofstream fout;
	char A[8] = "Academy";
	fout.open("my.txt", ios::in);
	fout.seekp(0, ios_base::beg); 
	fout.write(A, 8);

	fout.close();



	//fout.close();
	//fout.close();


	return 0;	
}