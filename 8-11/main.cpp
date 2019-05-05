#include <iostream>

using namespace std;

int main()
{
    int *number;
    cout<<*number<<endl;
    double *realPtr;
    long *integerPtr;
    *integerPtr=*realPtr;
    int*x,y;
    *x=y;
    char s[]="this is a character array";
    for(;*s!='\0';++*s)
        cout<<*s<<' ';
    short *numberPtr,result;
    void genericPtr+7;
    double x=19.34;
    double xPtr=&x;
    cout<<*xPtr<<endl;
}
