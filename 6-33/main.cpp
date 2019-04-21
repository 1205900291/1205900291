#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    for(unsigned int i=1;i<=100;i++)
    {
        cout<<setw(10)<<flip();
    if(i%5==0)
        cout<<endl;
    }
}

int flip()
{
    return rand()%2;
}
