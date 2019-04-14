#include <iostream>

using namespace std;

int integerPower(int,int);

int main()
{
    int base;
    int exponent;
    cin>>base>>exponent;
    cout<<integerPower(base,exponent);
}

int integerPower(int base,int exponent)
{
    int result=1;
    for(int i;i<=exponent;i++)
        result *=base;

    return result;
}
