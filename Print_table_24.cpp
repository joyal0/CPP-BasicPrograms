//C++ program to print the multiplication table of the given number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to print its multiplication table ";
    cin>>n;
    for(int i=1;i<=20;++i)
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
    return 0;
}