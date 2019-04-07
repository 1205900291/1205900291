#include <iostream>

using namespace std;

int main()
{
    int i;
    int x;
    int min;

    cin>>i;
    for(int counter=1;counter<=i;counter++)
    {

     cin>>x;
     if(x<min)
            min=x;
     cout<<min;
    }

}
