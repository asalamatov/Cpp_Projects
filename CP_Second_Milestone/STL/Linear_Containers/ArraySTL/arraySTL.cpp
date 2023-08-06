#include<iostream>
#include<string>
#include<array>
#include<algorithm>

using namespace std;

void updateArray(array<int, 5> arr, int i, int v){
    arr[i] = v;
}

void updateArrayByAddress(array<int, 5> &xarr, int i, int v){
    xarr[i] = v;
}


// params: arr - is copy of the actual array object, &arr is address of the actual array object
void printArray(const array<int, 5> &arr){ // read-only func, so make it const
    int n = arr.size();
    for (int i = 0; i < n ; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(const array<int, 10> &arr){ // read-only func, so make it const
    int n = arr.size();
    for (int i = 0; i < n ; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    array<int, 5> arr = {1,2,3,6,4};

    /* 1) update the actual array
    arr[0] = 10;

    for (int i = 0; i < arr.size() ; i++ )
    {
        cout<<arr[i]<<" "; // 10 2 3 6 3
    }*/


    /* 2) ALL STL CONTAINERS ARE PASSED BY VALUE NOT ADDRESS, SO THE COPY IS CREATED AND MODIFIED
    updateArray(arr, 0, 100); 
    for (int i = 0; i < arr.size() ; i++ )
    {
        cout<<arr[i]<<" "; // 1 2 3 6 4
    }*/

    // 3) Passed by address - &xarr in function, now the array object has 2 names arr and xarr
    updateArrayByAddress(arr, 0, 200);
    printArray(arr);
    // for (int i = 0; i < arr.size() ; i++ )
    // {
    //     cout<<arr[i]<<" "; // 200 2 3 6 4
    // }


    // 4) STL containers have iterators arr.begin() -> arr.end()
    // sort
    sort(arr.begin(), arr.end());
    printArray(arr);

    // 5) Fill
    array<int, 10> fives;
    fives.fill(5);
    printArray(fives);

    // arr.front() and arr.back() return first and last elements
    




    return 0;
}