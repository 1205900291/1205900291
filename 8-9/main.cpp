#include <iostream>

using namespace std;

int main()
{
    int value1=200000;
    int value2;
    int *longPtr;
    longPtr=&value1;
    cout<<*longPtr<<endl;
    value2=*longPtr;
    cout<<value2;
}
