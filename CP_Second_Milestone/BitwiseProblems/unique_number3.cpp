#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;

void updateSum(vi & sumArr, int x){
    // extract all bits of X
    for (int i = 0; i < 32 ; i++ )
    {
        int ith_bit = ( x& (1<<i) );
        if (ith_bit){
            sumArr[i]++;
        }
    }
}

int numFromBits(vi sumArr){
    int num = 0;
    for (int i = 0; i < 32 ; i++ )
    {
        num += (sumArr[i] * (1<<i));
    }
    return num;
}

int uniqueNo3(vi & arr){
    vi sumArr(32, 0); //fill constructor
    for (int x : arr)
    {   
        updateSum(sumArr, x);
    }

    for (int i = 0; i < 32 ; i++ )
    {
        sumArr[i] %= 3;
        // array of bits 0 or 1   
    }

    return numFromBits(sumArr);
}

int main()
{
    vi arr = {1,3,5,4,3,1,5,5,3,1};
    cout << uniqueNo3(arr);
    cout << endl;
    return 0;
}