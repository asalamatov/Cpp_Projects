#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if ( ((n/4) & (n/4-1)) == 0 ) cout << "Power of 4";
    else cout << "Not a power of 4";


    cout << endl;
    return 0;
}