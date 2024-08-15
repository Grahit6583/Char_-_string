#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

string rmv_occur(string  , string);

int main()
{
    string first;
    string second;
    system("CLS");
    cout<<"Enter the first string : \n";
    getline(cin,first);
    cout<<"Enter the second string : \n";
    getline(cin,second);
    cout<<rmv_occur(first , second);
    return 0;
}

string rmv_occur(string first , string second)
{
    while(first.length() != 0 && first.find(second) < first.length())
    {
        first.erase(first.find(second),second.length());
    }
    return first;
}