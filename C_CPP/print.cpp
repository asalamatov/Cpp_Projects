#include<iostream>
#include<string>
#include<map>

#define print cout<<
#define F first
#define S second

using namespace std;

int main()
{
    map<string, string> dict;
    dict.insert(make_pair("bir", "one"));
    dict.insert(make_pair("eki", "two"));
    for (map<string,string>::iterator i = dict.begin(); i!=dict.end(); i++){
        print i->F;
        print " = ";
        print i->S;
        print endl;
    }
    return 0;
}