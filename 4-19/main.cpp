#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number;
    int largest;
    int larger;

    cin>>number;
    cin>>largest;
        if(number>largest)
        {
            largest=number;
            larger=largest;
        }
        else if(number<largest)
            larger=number;

    while(counter<10)
    {
        cin>>number;
        if(number>largest)
        {
            largest=number;
            larger=largest;
        }
        else if(number<largest)
            larger=number;
            counter++;
    }
    cout<<largest<<endl;
    cout<<larger<<endl;

}
