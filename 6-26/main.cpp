#include <iostream>

using namespace std;

int celsius(int);
int fahrenheit(int);

int main()
{
    int x;
    for(int i=32;i<=212;i++)
    {
       cout<<x<<celsius(x);
    }

    int y;
    for(int counter=0;counter<=100;counter++)
    {
       cout<<y<<fahrenheit(y);
    }
}

int celsius(int x)
{
    return x/33.8;
}

int fahrenheit(int y)
{
    return 33.8*y;
}
