//C++ program to check if the number is even or odd
#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cout<<"Enter the number to check if it is even or odd ";
    cin>>n;
    if(n%2==0)
    cout<<n<<" is even.\n";
    else 
    cout<<n<<" is odd.\n";
    return 0;
}