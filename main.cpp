#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout<<"Enter two integers to compare:";
    cin>>x>>y;
    if(x>y)
        cout<<"x is large";
    if(x<y)
        cout<<"y is large";
    if(x==y)
        cout<<"These numbers are equal.";
}
