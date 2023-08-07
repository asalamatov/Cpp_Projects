#include<bits/stdc++.h>

using namespace std;

class Compare{
public:
    bool operator()(int a, int b){
        return a < b;
    }
};

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);

    priority_queue<int, vector<int>, Compare > heap;

    for (int x : arr){
        heap.push(x);
    }

    while (! heap.empty()){
        cout << heap.top()<< ",";
        heap.pop();
    }

    cout << endl;
    return 0;
}