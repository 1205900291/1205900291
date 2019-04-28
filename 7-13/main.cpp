#include <iostream>
#include <array>
using namespace std;

int main()
{
    int x;
    array<int,20>numbers;
    for(size_t i=0;i<numbers.size();++i)
    {
        numbers[i]=0;
        cin>>x;
    if(numbers[x]==0)
        numbers[x]=1;
    }
    for(size_t i=1;i<=101;i++)
        if(numbers[i]==1)
        cout<<i<<endl;
}
