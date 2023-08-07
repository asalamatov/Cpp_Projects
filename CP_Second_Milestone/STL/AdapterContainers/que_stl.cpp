#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(12);
    q.push(14);
    q.push(15);
    q.push(19);

    q.pop();

    while (! q.empty()){
        cout << q.front() << ",";
        q.pop();
    }
    cout << endl;
    return 0;
}