#include<bits/stdc++.h>

using namespace std;

void overlayNumber(char[] arr, int number){
    int j = 0;

    while( number > 0){
        int last_bit = number&1;
        if(last_bit)
            cout << arr[j]<<endl;
        j++;
        number >>= 1;
    }

}

void generateAllSubsequences(char arr[]){
    int n = strlen(arr);
    
    for (int i = 0; i < (1 << n) ; i++ )
    {
        overlayNumber(arr, i);
    }
    return;
}

int main()
{
    char arr[10000];
    cin>>arr;
    generateAllSubsequences(arr);
    cout << endl;
    return 0;
}