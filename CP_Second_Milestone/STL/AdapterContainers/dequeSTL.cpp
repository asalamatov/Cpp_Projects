#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<deque>

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
pop_front()
push_back()
pop_front()
resize()
size()
*/

int main()
{
    /*
    extend and contract from both ends
    not continuous storage - no pointer to the beginning
    */

   deque<int> dq(10);
   
   for (int i = 0; i < 10 ; i++ )
   {
        dq[i] = pow(i, i);
   }
   
   for (auto x : dq){
        cout << x << ",";
   }

    return 0;
}