#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;

int uniqueNo2(vi arr){
    int n = arr.size();

    //XOR
    int result = 0;
    for (int i=0; i<n; i++){
        result ^= arr[i];
    }
    int temp = result;

    // XOR to find first number
    int pos = 0;
    while ((temp&1)==0){
        pos++;
        temp = temp>>1;
    }

    int res1 = 0;
    int res2 = 0;
    int mask = (1<<pos);

    for (int i = 0; i < n ; i++ )
    {
        if ( (arr[i] &  mask) > 0){
            res1 ^= arr[i];
        } else {
            res2 ^= arr[i];
        }
    }



    return res2 * 10 + res1;
}

int main()
{
    vi arr = {1,3,4,5,3,1,5,7};
    cout << uniqueNo2(arr);
    cout << endl;
    return 0;
}