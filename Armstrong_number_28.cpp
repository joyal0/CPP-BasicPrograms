//C++ program to check iftrhe given number is  an armstrong number or not
#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    long long int num,arm=0,temp,d;
    cout<<"Enter the number to check if it is an armstrong number or not ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        d=temp%10;
        arm=arm+(d*d*d);
        temp/=10;
    }
    if(arm==num)
    cout<<num<<" is an armstrong number\n";
    else
    cout<<num<<" is not an armstrong number\n";
    return 0;
}