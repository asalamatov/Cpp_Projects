#include<iostream>
#include<stack>
using namespace std;

int main() {
	stack<string> books;
	books.push("C++");
	books.push("java");
	books.push("Python");
	books.push("C");

	while (!books.empty()) {
		cout << books.top();
		books.pop();
		cout << books.size() << endl;
	}



	return 0;
}