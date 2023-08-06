#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

/*
Methods - Vector
[]
at()
back()
begin()
capacity()
clear()
empty()
end()
erase()
front()
insert()
pop_back()
push_back()
reserve()
resize()
size()
*/

int main()
{
    //empty container constructor
    vector<int> first;

    //full constructor (4 ints with value 20)
    vector<int> second(4,20); // [20,20,20,20]

    //range consctructor
    int numbers [] = {10,20,30,40};
    vector<int> third(numbers, numbers+4); //pointers are passes

    // copy constructor
    vector<int> fourth(third);

    //another way
    vector<int> fifth = {1,2,3,4,10};

    // when vector is full, it doubles in size in linear time O(N), 
    // so we can use reserve in the beginning not to spend our precious time

    return 0;
}