#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int sum=0;

    cin>>i;
    for(int counter=1;counter<=i;counter++)
        cin>>sum;
        sum +=sum;
        cout<<sum;
}
