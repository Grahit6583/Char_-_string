#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

string replace_space(string);

int main()
{
    string str;
    cout<<"Enter the length of the string : \n";
    getline(cin,str);
    cout<<replace_space(str);
    return 0;
}

string replace_space(string s)
{
    int i;
    for(i=0;i<s.length();i++)
    {
        // if(s[i] == ' ')        //USING THIRD VARIABLE
        // {
        //     temp.push_back('@');
        //     temp.push_back('4');
        //     temp.push_back('0');
        // }
        // else
        // {
        //     temp.push_back(s[i]);
        // }
        if(s[i]==' ')         //WITHOUT USING THIRD VARIABLE
        {
            s.replace(i,1,"@40");
        }
    }
    return s;
}