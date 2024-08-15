#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>

using namespace std;

char getMaxOccur(string);

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<getMaxOccur(s);
    return 0;
}

char getMaxOccur(string s)
{
    int arr[26] = {0};
    char ch;
    int i;
    for(i=0;i<s.length();i++) //count of words in string
    {
        ch = s[i];
        int number =0;
        number  = ch - 'a';
        arr[number]++;
    }
    int max = -1,ans;
    for(i=0;i<26;i++)
    {
        if(max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }
    return 'a'+ans;
}