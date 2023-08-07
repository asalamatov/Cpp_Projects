#include<bits/stdc++.h>

using namespace std;

int toBinary(int n){
    int ans = 0;
    int p = 1;
    while (n>0) {
        ans += ((n & 1) * p);
        p *= 10;
        n >>= 1;
    }
    return ans;
}

int main()
{
    cout << toBinary(10);
    cout << endl;
    return 0;
}