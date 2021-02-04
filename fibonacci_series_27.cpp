//C++ program to give n terms of a fibonacci series
#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c;
    a=0;
    b=1;
    cout<<"Enter the number of terms u want to display ";
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cout<<a<<"\t";
        c=a+b;
        a=b;
        b=c;
    }
    cout<<endl;
    return 0;
}