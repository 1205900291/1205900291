#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const long rolls=36000;
    const int size=13;

    int expected[size]={0,0,1,2,3,4,5,6,5,4,3,2,1};
    int x;
    int y;
    int sum[size]={};

    srand(time(0));
    for(size_t i=1;i<=rolls;i++)
    {
        x=1+rand()%6;
        y=1+rand()%6;
        sum[x+y]++;
    }

    cout<<"sum"<<setw(2)<<"Total"<<setw(2)<<"Expected"<<setw(2)<<"Actual"<<endl;

    for(int j=2;j<size;j++)
        cout<<j<<" "<<sum[j]<<" "<<100*expected[j]/36<<" "<<100*sum[j]/rolls<<endl;
