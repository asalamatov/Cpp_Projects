#include<iostream>
#include<map>
using namespace std;

int main() {
	map<string, int> menu;  // lexicographic order

	//insert key value pair inside the hashtable 0(logN) operation
	menu["maggi"] = 15;
	menu["colddrink"] = 20;
	menu["dosa"] = 99;
	menu["mag"] = 135;
	menu["coddrink"] = 220;
	menu["dsdfsdsa"] = 939;

	//update query 0(logN)
	menu["dosa"] = menu["dosa"] * 1.1;

	//deletion O(logN)
	menu.erase("dosa");


	// searching inside  a collection of key value pairs O(logN)
	string item;
	cin >> item;
	if (menu.count(item) == 0) {
		cout << item << " is not available" << endl;
	}
	else {
		cout << item << " is available and costs " << menu[item] << "\n";
	}

	//iterate over all the key-value  pairs O(N)
	for (pair<string, int> item : menu) {
		cout << item.first << " - " << item.second << endl;
	}


	return 0;
}