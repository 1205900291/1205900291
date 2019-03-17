#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int max;
    int min;

    cout<<"Enter five integers to compare: ";
    cin>>a>>b>>c>>d>>e;
    max=a;
    min=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(d>max)
        max=d;
    if(e>max)
        max=e;
    if(b<min)
        min=b;
    if(c<min)
        min=c;
    if(d<min)
        min=d;
    if(e<min)
        min=e;

    cout<<max,
    cout<<min;


}
