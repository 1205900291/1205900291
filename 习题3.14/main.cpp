#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    Employee(string name,string surname,int salary)
    {
        setName(name);
        setSurname(surname);
        setSalary(salary);
    }

    void setName(string name)
    {
        Name=name;
    }

    string getName()
    {
        return Name;
    }

    void setSurname(string surname)
    {
        Surname=surname;
    }

    string getSurname()
    {
        return Surname;
    }

    void setSalary(int salary)
    {
        if(salary<0)
        {
            Salary=0;
        }
        else
            Salary=salary;
    }

    int getSalary()
    {
        return Salary;
    }

    void showEmployee() const
    {
        cout<<"Ãû"<<getName()<<"\nÐÕ"<<getSurname()<<"ÄêÐ½"<<getSalary()*12;
    }

private:
    string Name;
    string Surname;
    int Salary;
};

int main()
{
    Employee employee1("Sunny","White",2000);
    Employee employee2("Ó±"£¬"ÕÅ",3000);

    employee1.showEmployee();
    employee2.showEmployee();
}
