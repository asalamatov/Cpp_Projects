#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>

void pairSum(vi arr, int Sum)
{
    //logic
    unordered_set<int> s;

    for (int i = 0; i < arr.size() ; i++ )
    {
        int x = Sum - arr[i];
        if (s.find(x) != s.end()){
            cout << x << " -> " << arr[i] << endl;
        }
        // insert the 
        s.insert(arr[i]);
    }
}


int main()
{
    vi arr{10, 5, 2, 3, -6, 9, 11};
    int S = 4;

    pairSum(arr, S);

    cout << endl;
    return 0;
}