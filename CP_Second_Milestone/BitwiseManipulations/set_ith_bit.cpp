#include<bits/stdc++.h>

using namespace std;

void setIthBit(int &n, int i){
    cout << (n | (1 << i));
}

int main()
{
    int n;
    cin>>n;
    int i;
    cin >> i;
    // bool new_val;
    // cin >> new_val;
    setIthBit(n, i);
    cout << endl;
    return 0;
}