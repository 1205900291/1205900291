#include <iostream>

using namespace std;

int iseven(int);

int main()
{
    int x;
    int i;

    cin>>i;
    for(int counter=1;counter<=i;counter++)
    {
        cin>>x;

    if(iseven(x))
        cout<<"true";
    else
        cout<<"false";
    }
}

int iseven(int x)
{
    return !(x%2);
}
