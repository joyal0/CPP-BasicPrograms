//C++ program to check if it is a leap year or not
#include<iostream>
using namespace std;

int main()
{
    int y,flag=0;
    cout<<"Enter the year to check if it is leap or not ";
    cin>>y;
    if(y%4==0)
    {
        if(y%100!=0)
        {
            flag=1;
        }
    }
    else if(y%400==0)
    {
        flag=1;
    }
    if(flag==1)
    cout<<y<<" is  a leap year\n";
    else 
    cout<<y<<" is NOT a leap year\n";
    return 0;
}