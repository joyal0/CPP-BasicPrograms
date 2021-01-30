//C++ program to check if the character is a vowel or consonant
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the character to check if it is a vowel or consonant ";
    cin>>ch;
    if((ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'))
    cout<<ch<<" is a vowel\n";
    else if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
    cout<<ch<<" is a consonant\n";
    else
    cout<<ch<<" is not an alphabet\n";
    return 0;
}