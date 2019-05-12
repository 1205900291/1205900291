#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex a(1,7),b(9,2),c;

    a.printComplex();
    cout<<"+";
    b.printComplex();
    cout<<"=";
    c=a.add(b);
    c.printComplex();

    cout<<'\n';
    a.setComplexNumber(10,1);
    b.setComplexNumber(11,5);
    a.printComplex();
    cout<<"-";
    b.printComplex();
    cout<<"=";
    c=a.subtract(b);
    c.printComplex();
    cout<<endl;
}
