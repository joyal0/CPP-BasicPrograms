//C++ program to find the the numbe rtis palindrome or n
#include<iostream>
using namespace std;

int main()
{
    long long int num,rev,temp,d;
    cout<<"Enter the number to check if it is palindrome or not ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        d=temp%10;
        rev=(rev*10)+d;
        temp/=10;
    }
    if(rev==num)
    cout<<num<<" is a palindrome.\n";
    else
    cout<<num<<" is not a palindrome.\n";
    return 0;
}
