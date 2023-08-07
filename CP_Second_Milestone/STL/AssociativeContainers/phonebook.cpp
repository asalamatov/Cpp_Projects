#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string, vector<string> > phonebook;
    phonebook["Azamat Salamatov"] = (vector<string>) {"12345678"};
    phonebook["person1"] = (vector<string>) {"12345678"};
    phonebook["person2"] = (vector<string>) {"12345678"};
    phonebook["User Salamatov"] = (vector<string>) {"12345678"};
    phonebook["person1"].push_back("7875676542567893");

    for (pair<string, vector<string> > info : phonebook){
        cout << info.first << "=> ";
        for (int i = 0; i < info.second.size() ; i++ )
        {
            cout << info.second[i] << ", ";
        }
        cout << endl;
    }


    cout << endl;
    return 0;
}