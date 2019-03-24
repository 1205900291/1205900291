#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
    GradeBook(string coursename,string teachername)
    {
        setCourseName(coursename);
        setTeacherName(teachername);
    }

    void setCourseName(string coursename)
    {
        CourseName=coursename;
    }

    string getCourseName()
    {
        return CourseName;
    }

    void setTeacherName(string teachername)
    {
        TeacherName=teachername;
    }

    string getTeacherName()
    {
        return TeacherName;
    }

    void displayMessage()
    {
        cout<<"Welcome to the grade book for"<<getCourseName()<<"\nThis course is presented by:"<<getTeacherName()<<endl;
    }

private:
    string CourseName;
    string TeacherName;
};

int main()
{
    GradeBook myGradeBook("C++","Miss White");
    myGradeBook.displayMessage();
}
