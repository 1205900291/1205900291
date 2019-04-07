#include <iostream>

using namespace std;

int main()
{
    int n;
    int i=1;
    double x=4;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            x=x+(double)4/(2*i+1);
            else if(i%2 !=0)
            x=x-(double)4/(2*i+1);
        cout<<x;

    }
}
