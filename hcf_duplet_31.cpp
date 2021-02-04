//C++ program to find the HCF of 2 number
#include<iostream>
using namespace std;

int main()
{
    int a,b,x,y;
    cout<<"Enter the 2 numbers to find its hcf ";
    cin>>a>>b;
    x=a;
    y=b;
    while(x!=y)
    {
        if(x>y)
        x=x-y;
        else 
        y=y-x;
    }
    cout<<"The HCF of "<<a<<" and "<<b<<" is "<<x<<endl;
    return 0;
}