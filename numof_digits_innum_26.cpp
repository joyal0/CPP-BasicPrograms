//C++ program to find number of digits in a number
#include<iostream>
using namespace std;

int main()
{
    long long int num,count=0,temp;
    cout<<"Enter the number to find the number of digits in it ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        ++count;
        temp/=10;
    }
    cout<<"The number of digits in the number "<<num<<" is "<<count<<endl;
    return 0;
}