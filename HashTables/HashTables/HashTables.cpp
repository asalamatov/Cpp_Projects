#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
	unordered_map<string, int> menu;  // unordered

	//insert key value pair inside the hashtable 0(1) operation
	menu["maggi"] = 15;
	menu["colddrink"] = 20;
	menu["dosa"] = 99;
	menu["mag"] = 135;
	menu["coddrink"] = 220;
	menu["dsdfsdsa"] = 939;

	//update query 0(1)
	menu["dosa"] = menu["dosa"] * 1.1;

	//deletion O(1)
	menu.erase("dosa");


	// searching inside  a collection of key value pairs O(1)
	string item;
	cin >> item;
	if (menu.count(item) == 0) {
		cout << item << " is not available"<<endl;
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