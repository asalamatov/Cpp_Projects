#include<bits/stdc++.h>

using namespace std;

int get_ith_bit(int &n, int i){
    return (((n & (1 << i)) > 0));
}

int main()
{
    int n;
    cin>>n;
    int i;
    cin >> i;
    cout << get_ith_bit(n, i);
    cout << endl;
    return 0;
}