#include <iostream>

using namespace std;

int S(int);

int main()
{
    int x=2;
    for(int i=2;i<=10000;i++)
    {
        cout<<S(x);

    }
}

int S(int x)
{
    if((x%2)==0)
        return 0;
    else
        return x;
}
