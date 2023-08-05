#include<iostream>
#include<string>

using namespace std;

// Array to functions
void updateArray(int arr[], int i, int value){ // arr and *arr can both be used
    arr[i] = value;
}


// Size of the array MUST be given as a parameter
void print(int arr[], int n){  // arr doesn't know its 
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

    // for (int i = 0; i < n ; i++ )
    // {
    //     cout << *(arr+i) << endl;
    // }       

    return 0;
}