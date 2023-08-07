#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>

/*
given array of ints, find 1 unique number
*/

int findUnique(vi &nums){
    int n = nums.size();
    int Xor = 0;
    for (int i = 0; i < n; i++){
        Xor ^= nums[i];      // O(1) space & O(N) time
    }
    return Xor;
}

int main()
{
    vi nums = {1,2,3,4,5,6,1,2,3,4,5};
    cout << findUnique(nums);
    cout << endl;
    return 0;
}