#include<bits/stdc++.h>

using namespace std;

/*
unordered set
*/

int main()
{
    unordered_set<int> s{1,2,3,4,5,5,6,7,4,2}; // O(1), if we used array => O(N), if sortedArray => O(logN)
    int key;
    cin >> key;

    if (s.find(key)!=s.end()){
        cout << "contains "<<key;
    }
    else{
        cout << key << " not found";
    }

    cout << endl;
    return 0;
}