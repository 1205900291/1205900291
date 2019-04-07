#include <iostream>

using namespace std;

int main()
{
    int counter;
    bool breakout=false;
    for(counter=1;(counter<=10)&&(!breakout);counter++)
    {
        if(counter==5)
            breakout=true;
        else
            cout<<counter;
    }
}
