#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int max;
    int min;

    cout<<"Enter three integers:";
    cin>>x>>y>>z;
    cout<<"Sum is"<<x+y+z;
    cout<<"Average is"<<(x+y+z)/3;
    cout<<"Product is"<<x*y*z;
    if(x>y)
        max=x;
    else
        max=y;
    if(z>max)
        max=z;
    if(x<y)
        min=x;
    else
        min=y;
    if(z<min)
        min=z;

    cout<<"Largest is"<<max;
    cout<<"Smallest is"<<min;
}
