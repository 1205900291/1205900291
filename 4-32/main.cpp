#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;

    cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&a+c>b)
        cout<<"yes";
    else
        cout<<"no";
}
