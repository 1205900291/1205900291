#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double,double);

int main()
{
    double x;
    double y;
    cin>>x>>y;
    cout<<hypotenuse(x,y);
}

double hypotenuse(double x,double y)
{
    return sqrt(x*x+y*y);
}

