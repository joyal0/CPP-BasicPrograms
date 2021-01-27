//C++ program to convert the days into years,weeks and days
//(leap year taken into account)
#include<iostream>
using namespace std;

int main()
{
    long long int da,y,w,d,t;
    cout<<"Enter the days to be converted ";
    cin>>da;
    y=da/365;
    if(y>=4)
    t=(da%365)-(1*(y/4));
    w=t/7;
    d=t%7;
    cout<<"The "<<da<<" days given are ="<<y<<" years, "<<w<<" weeks and "<<d<<" days."<<endl;
    return 0;
}