#include<bits/stdc++.h>

using namespace std;

void clear_ith_bit(int &n, int i){
    int mask = ~(1 << i);
    n = n & mask;
    cout << n;
}

void setIthBit(int &n, int i){
    cout << (n | (1 << i));
}

int get_ith_bit(int &n, int i){
    return (((n & (1 << i)) > 0));
}

int main()
{
    int n = 13;
    int i;
    cin >> i;
    clear_ith_bit(n, i);
    // cout << n;
    cout << endl;
    return 0;
}