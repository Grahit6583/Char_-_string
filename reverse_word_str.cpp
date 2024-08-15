#include<iostream>
#include<string>
#include<sstream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

string reverse(string);

int main()
{
    string s;
    cout<<"Enter the sentence in the string : \n";
    getline(cin,s); //to take sentence in input from user
    cout<<reverse(s);
    return 0;
}

string reverse(string s)
{
    stringstream str(s);
    string word,ans="";
    while(str >> word)
    {
        ans = word+" "+ans;
    }
    ans.pop_back();  //to remove the space at the end of the string ex:- "hello "
    return ans;
}