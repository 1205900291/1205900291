#include <iostream>

using namespace std;

int main()
{
    int n;
    int s=1;
    cin>>n;
    while(n>0)
    {
        s *=n;
        n--;
    }
    cout<<s;
}
