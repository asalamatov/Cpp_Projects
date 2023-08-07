#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>

/*
variadic function templates
*/

int sum(){
    return 0;
}

template<typename... T>
int sum(int a, T... args){
    return a + sum(args...);
}

int main()
{
    cout << sum(7,5,3,2,5,7,3,2,65,77);
    cout << endl;
    return 0;
}