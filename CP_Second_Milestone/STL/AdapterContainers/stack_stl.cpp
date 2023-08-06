#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<string> books;
    books.push("C++");
    books.push("C");
    books.push("F#");
    books.push("Java");

    while (! books.empty()){
        cout << books.top() << " ";
        books.pop();
    }
    cout << endl;

    return 0;
}