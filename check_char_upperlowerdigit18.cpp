//C++ program to check if trhe character is an uppercase, lowercase, digit or special character
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the character to check if it is uppercase/lowercase/digit/special character ";
    cin>>ch;
    if((ch>=65)&&(ch<=90))
    cout<<ch<<" is a UPPERCASE alphabet\n";
    else if((ch>=48)&&(ch<=57))
    cout<<ch<<" is a digit\n";
    else if((ch>=97)&&(ch<=122))
    cout<<ch<<" is a lowercase alphabet\n";
    else
    cout<<ch<<" is a special character\n";
    return 0;
}