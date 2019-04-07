#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int i=0;
    int counter=0;

    cin>>i;
    for(;i != 9999;cin>>i)
        sum +=i;
        counter++;
        cout<<sum/counter;
}
