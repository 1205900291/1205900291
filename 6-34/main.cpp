#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int integer(int,int);

int main()
{
    srand(time(0));
    int answer;
    int guess;
    int response;

    do
    {
        answer=1+rand()%1000;
        cout<<"I have a number between 1 and 1000."<<endl;
        cout<<"Can you guess my number?"<<endl;
        cout<<"Please type your first guess."<<endl;
        cin>>guess;

        while(!integer(answer,guess))
            cin>>guess;

        cout<<"Excellent!You guessed the number!"<<endl;
        cout<<"Would you like to play again(y or n)?"<<endl;
        cin>>response;
    }while (response=='y');
}

int integer(int answer,int guess)
{
    if(guess==answer)
        return true;

    if(guess<answer)
        cout<<"Too low.Try again.";
    else
        cout<<"Too high.Try again.";
    return false;

}
