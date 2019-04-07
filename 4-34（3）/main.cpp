#include <iostream>

using namespace std;

int main()
{
    int n=1;
    int x;
    int s;
    int sum;
    cin>>n>>x;
    while(n>0)
    {
        s *=n;
        x *=x;
        sum +=sum+(1/n)*x;
        n--;
    }
    cout<<sum;
}
