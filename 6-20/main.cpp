#include <iostream>

using namespace std;

int multiple(int,int);

int main()
{
    int x;
    int y;
    cin>>x>>y;
    if(multiple(x,y))
        cout<<"true";
    else
        cout<<"false";
}

int multiple(int x,int y)
{
    return (y%x);
}
