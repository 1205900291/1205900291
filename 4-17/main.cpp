#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number;
    int largest;

    while(counter<10)
    {
        cout<<"Enter ten numbers:";
        cin>>number;
        if(counter==0)
            largest=number;
        else if(largest<number)
            largest=number;
        counter++;
    }
    cout<<largest;
}
