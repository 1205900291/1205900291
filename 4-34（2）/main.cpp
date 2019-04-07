#include <iostream>

using namespace std;

int main()
{
    int n=1;
    int s;
    int sum;
    cin>>n;
    while(n>0)
    {
        s *=n;
        sum +=sum+(1/s);
        n--;
    }
    cout<<sum;

}
