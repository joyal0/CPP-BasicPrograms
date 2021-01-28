//C++ program to calculate the compound interest
#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    double p,r,t,n,ci;
    cout<<"Enter the Principal(p)";
    cin>>p;
    cout<<"Enter the rate of interest(r) in decimal(after fraction conversion)";
    cin>>r;
    cout<<"Enter the time period(t) in years";
    cin>>t;
    cout<<"Enter the COmpounding period(n) in decimal format NO FRACTIONS ";
    cin>>n;
    ci=(p*pow((1+(r/n)),n*t))-p;
    cout<<"The total compound total interest is "<<ci<<endl;
    return 0;    
}