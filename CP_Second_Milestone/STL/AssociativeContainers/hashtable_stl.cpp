#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

/*
    Hashtables
    python: dictionary

    insertion, erase, search = O(1) avg

    linked lists, arrays, sliding window, graph: dijkstra


    # CONTAINER TYPES
    maps & sets = balanced BS Trees O(logN)
    unordered_maps(=hashtable)      O(1)
    unordered_sets(~hashtable)      O(1)
    multimaps, unordered multimaps,
    multisets, etc

    # DBMS  = hashtable

*/

int main()
{
    unordered_map<string, int> menu;

    // Insertion - O(1)
    menu["maggi"] = 15;
    menu["cold_drink"] = 20;
    menu["dosa"] = 99;
    menu["pizza"] = 499;
    menu["cola"] = 995;
    menu["kuurdak"] = 399;

    // Search
    string item;
    cin >> item;

    // update
    menu["dosa"] = (1.1) * menu["dosa"];

    // erase
    menu.erase("cold_drink");

    if (menu.count(item)){
        cout << "YES"<< " it costs "<<menu[item]<<endl;
    } else{
        cout << "Not";
    }

    for (unordered_map<string, int>::iterator i = menu.begin(); i != menu.end(); i++){
        cout << i->first << " : "<< i->second<<endl;
    }

    cout << "\n*************************\n";

    for (pair<string, int> item : menu){
        cout << item.first << "=>"<< item.second<<endl;
    }

    cout << endl;
    return 0;
}


// if i change all unordered_map into map -> time complexity will shift from O(1) to O(logN)