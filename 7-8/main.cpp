#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    array<int,7>alphabet;

    for(size_t i=0;i<alphabet.size();++i)
        alphabet[i]=0;

        cout<<alphabet[6]<<endl;

    array<int,5>grades;

    for(size_t j=0;j<grades.size();++j)
        grades[j]=0;

    grades[4]=90;
    cout<<grades[4]<<endl;

    array<int,5>values={8,8,8,8,8};

    cout<<"Element"<<setw(10)<<"values"<<endl;

    for(size_t n=0;n<values.size();++n)
        cout<<n<<setw(10)<<values[n]<<endl;

    const size_t arraySize=100;
    array<int,arraySize>temperatures={};
    int total=0;
    for(size_t i=0;i<temperatures.size();++i)
        total +=temperatures[i];
    cout<<total<<endl;
}
