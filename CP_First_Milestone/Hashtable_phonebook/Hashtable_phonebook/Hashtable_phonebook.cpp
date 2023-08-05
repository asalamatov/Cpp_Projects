#include<iostream>
#include<map>
#include<list>
#include<string>
using namespace std;

int main() {
	map<string, list<string, string>> phonebook;

	phonebook["prateek"].push_back("22222222222222222");
	phonebook["prateek"].push_back("11111111111111111");
	phonebook["prateek"].push_back("33333333333333333");

	phonebook["Azamat"].push_back("2222Azamat2222222222222");
	phonebook["Azamat"].push_back("111111111Azamat11111111");
	phonebook["Azamat"].push_back("3333Azamat3333333333333");

	//try to make a phone book and print it;



	return 0;
}