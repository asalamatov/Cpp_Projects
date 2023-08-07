#include<bits/stdc++.h>

using namespace std;

int count_bits(int n){
    int cnt = 0;
    while(n > 0){
        cnt += n&1;
        n >>= 1;
    }
    return cnt;
}

int count_bits_hack(int n){
    int ans;
    while(n > 0){
        n &= (n - 1);
        ans ++;
    }
    return ans;
}

int main()
{
    cout << count_bits(5)<<endl;
    cout << count_bits_hack(5);
    cout << endl;
    return 0;
}