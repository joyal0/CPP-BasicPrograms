//C++ program to find quotient nand remainder of 2 numbers
#include<iostream>
using namespace std;

int main()
{
    float q,r;
    int a,b;
    cout<<"Enter the dividend and divisor";
    cin>>a>>b;
    q=a/b;
    r=a%b;
    cout<<"The quotient is "<<q<<" and remainder is "<<r;
    return 0;
}