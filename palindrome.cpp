#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool valid(char);
bool palindrome(vector<char> &);
vector<char> convert_lc(vector<char> &);
bool unit_fun(vector<char> &);

int main()
{
    char ch;
    vector<char> ss;
    int n;
    cout<<"Enter the length of the string : ";
    cin>>n;
    int i;
    cout<<"Enter the data in the string : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ch;
        ss.push_back(ch);
    }
    bool ans = unit_fun(ss);
    for(i=0;i<n;i++)
    {
        cout<<ss[i];
    }
    cout<<endl;
    cout<<"the ans is : "<<endl;
    if(ans == true)
    {
        cout<<"the string is palindrome ";
    }
    else
    {
        cout<<"the string is not palindrome ";
    }
    return 0;
}

bool palindrome(vector<char> &arr)
{
    int s =0;
    int e = arr.size()-1;
    while(s<=e)
    {
        if(arr[s] != arr[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

char convert_lc(char ss)
{
    char temp;
        if((ss >= 'a' && ss <= 'z') || (ss >= '0' && ss <= '9'))
        {
            return ss;
        }
        else
        {
            temp = (ss-'A'+'a');
            return temp;
        }
}

bool valid(char ss)
{
        if((ss >= 'a' && ss <= 'z') || (ss >= 'A' && ss <= 'Z') || (ss >= '0' && ss <= '9'))
        {
            return 1;
        }
    return 0;
}

bool unit_fun(vector<char> &ss)
{
    int i;
    vector<char> temp;
    for(i=0;i<ss.size();i++)
    {
        if(valid(ss[i]))
        {
            temp.push_back(ss[i]);
        }
    }
    vector<char> ans;
    for(i=0;i<temp.size();i++)
    {
        ans.push_back(convert_lc(temp[i]));
    }
    return palindrome(ans);
}