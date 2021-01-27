//C++ program to convert given input in inches to yard feet and inches.
#include<iostream>
using namespace std;

int main()
{
    long long int inch,y,f,i;
    cout<<"Enter the inches to be converted ";
    cin>>inch;
    y=inch/432;
    f=(inch%432)/12;
    i=((inch%432)%12);
    cout<<"The "<<inch<<" given is :"<<y<<" yards, "<<f<<" feet, and "<<i<<" inches."<<endl;
    return 0;
}