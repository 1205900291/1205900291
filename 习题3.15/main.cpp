#include <iostream>
#include <string>
using namespace std;

class date
{
public:
    Date(int year,int month,int day)
    {
        setYear(year);
        setMonth(month);
        setDay(day);
    }

    void setYear(int year)
    {
        Year=year;
    }

    int getYear()
    {
        return Year;
    }

    void setMonth(int month)
    {
        if(1<=month<=12)
        {
            Month=month;
        }
        else
            Month=1;
    }

    int getMonth()
    {
        return Month;
    }

    void setDay(int day)
    {
        Day=day;
    }

    int getDay()
    {
        return Day;
    }

    void displayDate()
    {
        cout<<getYear()<<"/"<<getMonth()<<"/"<<getDay();
    }
private:
    int Year;
    int Month;
    int Day;
};

int main()
{
    Date date("2019","3","16");
    date.displayDate();
}
