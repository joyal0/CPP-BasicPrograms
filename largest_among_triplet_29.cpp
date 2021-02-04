//C++ progra to find the largest among three numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,la;
    cout<<"Enter the 3 numbers to find the largest among them ";
    cin>>a>>b>>c;
    la=a;
    if(la<b)
    la=b;
    else if(la<c)
    la=c;
    cout<<la<<" is the larget among the 3 numbers\n";
    return 0;
}