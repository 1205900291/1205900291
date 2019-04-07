#include <iostream>

using namespace std;

int main()
{
    int sum=1;
    int i;

    for(i=1;i<=15;i +=2)
        sum *=i;
    cout<<sum;
}
