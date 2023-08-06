#include<bits/stdc++.h>

using namespace std;

/*
count the frequency of an element of the array
*/

int main()
{
    int arr[] = {20,30,40,40,40,50, 100, 120};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    cout << upper_bound(arr, arr + n, key) - lower_bound(arr, arr + n, key);
    cout << endl;
    return 0;
}