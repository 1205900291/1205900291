#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE=5;
    unsigned int values[SIZE]={2,4,6,8,10};
    unsigned int *vPtr;
    for(int i=1;i<=SIZE;++i)
       cout<<setw(4)<<values[SIZE];

    vPtr=&y;
    for(vPtr=values;vPtr<values+5;vPtr++)
        cout<<*vPtr;

}
