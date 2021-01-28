//C++ Program to calcaulate the roots of a quadratic equation
//determinant= (b^2)-4ac
//x1=(-b+sqrt(d))/(2*a)
//x2=(-b-sqrt(d))/(2*a)
#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    long long int a,b,c,d,x1,x2,r,i;
    cout<<"Standard form of  aquadratic equation ax^2+bx^1+c=0 \n as in this format enter the values of a, b and c respectively: ";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"The roots are Real and Different\n They are \nx1="<<x1<<"\nx2="<<x2<<endl;
    }
    else if(d==0)
    {
        x1=(-b+sqrt(d))/(2*a);
        cout<<"The roots are Real and Same(Equal)\n They are \nx="<<x1<<endl;
    }
    else
    {
        r=-b/(2*a);
        i=sqrt(-d)/(2*a);
        cout<<"The roots are Complex and Different\n";
        cout<<"First root="<<r<<"+"<<i<<"i\n";
        cout<<"Second root="<<r<<"-"<<i<<"i\n";
    }
    return 0;
}