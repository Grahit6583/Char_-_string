#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

int compress(vector<char>&);

int main()
{
    int n,i;
    char ch;
    vector<char> chars;
    cout<<"Enter the length of the string : \n";
    cin>>n;
    cout<<"Enter the data in the string : \n";
    for(i=0;i<n;i++)
    {
        cin>>ch;
        chars.push_back(ch);
    }
    int ans = compress(chars);
    for(i=0;i<ans;i++)
    {
        cout<<chars[i]<<" ";
    }
    return 0;
}

int compress(vector<char> &chars)
{
    int i=0;
    int ansindex = 0;
    int n = chars.size();
    while(i<n)
    {
        int j = i+1;
        while(j<n && chars[i] == chars[j])
        {
            j++;
        }

        chars[ansindex++] = chars[i];
        int count = j-i;
        if(count > 1)
        {
            string cnt = to_string(count);
            for(char ch: cnt)
            {
                chars[ansindex++] = ch;
            }
        }
        i = j;
    }
    return ansindex;
}