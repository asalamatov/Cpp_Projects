#include<bits/stdc++.h>

using namespace std;

void clear_ith_bit(int &n, int i){
    int mask = ~(1 << i);
    n = n & mask;
}

void setIthBit(int &n, int i, int v){
    cout << (n | (v << i));
}

int get_ith_bit(int &n, int i){
    return (((n & (1 << i)) > 0));
}

void clearLastIBits(int & n, int i){
    int mask = (-1 << i);
    n = n & mask;
}

int main()
{
    int n = 13;
    int i;
    cin >> i;
    int v = 1;
    // clear_ith_bit(n, i);
    // setIthBit(n,i, v);
    clearLastIBits(n, i);
    cout << n;

    cout << endl;
    return 0;
}