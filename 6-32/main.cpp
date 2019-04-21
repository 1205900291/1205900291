#include <iostream>

using namespace std;

int qualityPoints(int);

int main()
{
    int grade;
    cout<<"Enter the grade: ";
    cin>>grade;
    cout<<qualityPoints(grade);
}

int qualityPoints(int x)
{
    if(90<=x&&x<=100)
        return 4;
    else if(80<=x&&x<=89)
        return 3;
    else if(70<=x&&x<=79)
        return 2;
    else if(60<=x&&x<=69)
        return 1;
    else
        return 0;
}
