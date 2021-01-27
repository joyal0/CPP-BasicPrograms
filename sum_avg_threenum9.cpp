//C++ program to nfind the sum and average of 3 numbers
#include<iostream>
using namespace std;

int main()
{
    double a,b,c,sum,avg;
    cout<<"enter the 3 numbers to find its sum ";
    cin>>a>>b>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<"The sum is "<<sum<<" and average is "<<avg<<endl;
    return 0;
}