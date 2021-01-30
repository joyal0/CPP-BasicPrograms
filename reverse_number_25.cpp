//C++ program to reverse a number
#include<iostream>
using namespace std;

int main()
{
    long long int n,r=0,d,temp;
    cout<<"Enter the number to reverse(NATURAL NUMBER) ";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        r=(r*10)+d;
        temp/=10;
    }
    cout<<"Reverse of "<<n<<" is "<<r<<endl;
    return 0;
}