#include <iostream>

using namespace std;

int tripleByValue(int);
void tripleByReference(int &);

int main()
{
    int x=0;
    int y=0;

    cout<<"Enter two integers: ";
    cin>>x>>y;

    cout<<"x="<<x<<" before tripleByValue"<<endl;
    cout<<"Value returned by tripleByValue: "<<tripleByValue(x)<<endl;
    cout<<"x="<<x<<" after tripleByValue"<<endl;

    cout<<"y="<<y<<" before tripleByReference"<<endl;
    tripleByReference(y);
    cout<<"y="<<y<<" after tripleByReference";
}

int tripleByValue(int count)
{
    return 3*count;
}

void tripleByReference(int &countRef)
{
    countRef=3*countRef;
}
