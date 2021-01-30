//C++ PRogram to calculate the factorial of the given number
#include<iostream>
using namespace std;

int main()
{
    int a;
    long long int fact=1;
    cout<<"Enter the  number to find its factorial ";
    cin>>a;
    if(a>=1)
    {
        for(int i=1;i<=a;++i)
        {
            fact=fact*i;
        }
        cout<<"The factorial of "<<a<<"!="<<fact<<endl;
    }
    else
    cout<<"The given number is not positive\n";
    return 0;
}