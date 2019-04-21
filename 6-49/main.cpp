#include <iostream>

using namespace std;

inline double circleArea(const double x)
{
    return 3.14*x*x;
}

int main()
{
    double x;
    cout<<"Enter one integer: ";
    cin>>x;
    cout<<circleArea(x);
}
