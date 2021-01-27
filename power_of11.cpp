//C++ program to raise any given number to the given power
#include<iostream>
using namespace std;
#include<math.h>            //pow() is in this header file

int main()
{
    int a,x,res;
    cout<<"Enter the number to be raised and the power respectively ";
    cin>>a>>x;
    res=pow(a,x);
    cout<<"The result of "<<a<<"^"<<x<<" is "<<res<<endl;
    return 0;
}
