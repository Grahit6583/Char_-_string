#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

bool checkInclusion(string , string);
bool checkequal(int [] , int []);

int main()
{
    string s1 , s2;
    cout<<"Enter the data in first string : \n";
    getline(cin,s1);
    cout<<"Enter the data in the second string : \n";
    getline(cin,s2);
    cout<<s1<<"\t"<<s2<<"\n";
    if(checkInclusion(s1,s2))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}

bool checkInclusion(string s1 , string s2)
{
    int count1[26] = {0};
    int i;
    for(i=0;i<s1.length();i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    i =0 ;
    int windowSize = s1.length();
    int count2[26] = {0};
    while(i < windowSize && i < s2.length())
    {
        int index = s2[i]-'a';
        count2[index]++;
        i++;
    }

    if (checkequal(count1 , count2))
    {
        return 1;
    }

    while(i<s2.length())
    {
        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;

        char oldchar = s2[i-windowSize];
        index = oldchar - 'a';
        count2[index]--;
        i++;

        if(checkequal(count1 , count2))
            return 1;
    }
    return 0;
}

bool checkequal(int a[26] , int b[26])
{
    for(int i =0 ; i<26 ; i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}