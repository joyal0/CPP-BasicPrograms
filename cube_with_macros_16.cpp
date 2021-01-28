//C++ program to calculate cube using macros
#include<iostream>
using namespace std;
#define Cube(n) (n*n*n)

int main()
{
    long long int a,cube;
    cout<<"Enter the number whose cube needs to be calculated ";
    cin>>a;
    cube= Cube(a);
    cout<<"The cube of the number "<<a<<" is "<<cube<<endl;
    return 0;
}