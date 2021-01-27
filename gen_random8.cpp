//C++ prgram to generate 10 random numbers with seed specified by the user.
#include<iostream>
using namespace std;
#include<stdlib.h>          //rand() and srand() are defined in this headerfile.

int main()
{
    unsigned int s;         //seed valu shou;d be an unsigned integer for srand()
    cout<<"Enter the value of seed(NOTE: it should be a positive number)\n";
    cin>>s;
    srand(s);
    for(int i=0;i<=9;++i)
    {
        cout<<rand()<<endl;
    }
    return 0;
}

