#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>

bool compare(int a, int b){
    return a > b;
}

int main()
{
    vi v = {1,2,3,4,56,10,13,12, 15};

    // sort(v.begin() ,v.end(), compare);
    sort(v.begin() ,v.end(), [] (int a, int b)->bool{return a>b;});

    for (auto x : v){
        cout << x << ", ";
    }
    
    cout << endl;
    return 0;
}