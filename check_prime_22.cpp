//C++ program to check if the given number is prime or not
#include<iostream>
using namespace std;

int main()      
{
    int a,flag=1;
    cout<<"Enter the number to check if it is a prime or not";
    cin>>a;
    if(a==1)
    cout<<"2 is the samllest prime number\n";
    else
    {
        for(int i=2;i<a;++i)
        if(a%i==0)
        {
            flag=0;
            break;
        }
        if(flag==0)
        cout<<a<<" is not a prime number.\n";
        else if(flag==1)
        cout<<a<<" is a prime number.\n";
    }
    return 0;
}