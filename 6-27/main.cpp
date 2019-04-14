#include <iostream>

using namespace std;

double smallest(double,double,double);

int main()
{
    double x;
    double y;
    double z;

    cin>>x>>y>>z;
    cout<<smallest(x,y,z);
}

double smallest(double x,double y,double z)
{
    if(x<y&&x<z)
        return x;
    else if(y<x&&y<z)
        return y;
    else
        return z;
}
