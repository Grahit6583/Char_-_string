#include<iostream>
#include<stdlib.h>

using namespace std;

int length(char []);
void reverse_char(char [] ,int);

int main()
{
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    int len = length(name);
    cout<<"Your name length is : "<<length(name)<<endl;
    reverse_char(name,len);
    cout<<"Reverse of your name is : "<<name;
}

int length(char name[])
{
    int i;
    int count = 0;
    for(i=0;name[i] != '\0';i++)
    {
        count++;
    }
    return count;
}

void reverse_char(char name[] , int len)
{
    int s =0 ;
    int e =len-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}