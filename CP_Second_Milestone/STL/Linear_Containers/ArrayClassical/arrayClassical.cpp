#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// Array to functions
void updateArray(int arr[], int i, int value){ // arr and *arr can both be used
    arr[i] = value;
}


// Size of the array MUST be given as a parameter
void print(int arr[], int n){  // arr doesn't know its size
    for (int i = 0; i < n ; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[/*optional size*/] = {1,2,6,4,5};

    int n = sizeof(arr)/sizeof(int);

    // actual array is updated
    updateArray(arr, 2, 13);
    print(arr, n);
    sort(arr, arr + n);
    print(arr, n);

    // cout<< sizeof(string)<<"str"<<endl;
    // cout<< sizeof(short)<<"short"<<endl;
    // cout<< sizeof(float)<<"float"<<endl;
    // cout<< sizeof(char)<<"char"<<endl;

    // for (int i = 0; i < n ; i++ )
    // {
    //     cout << *(arr+i) << endl;
    // }       

    return 0;
}