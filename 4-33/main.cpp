#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;

    cin>>a>>b>>c;
    while(a+b>c&&a+c>b&&b+c>a)
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            cout<<"yes";
        else
            cout<<"no";
    }
}
