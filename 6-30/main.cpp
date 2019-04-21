#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int rn=0;

    cout<<"Enter one integer: ";
    cin>>n;
    do
    {
        rn=rn*10+n%10;
    }while(n /=10);
    cout<<rn;
}

