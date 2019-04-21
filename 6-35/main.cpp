#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int integer(int,int);
int count(int);

int main()
{
    srand(time(0));
    int answer;
    int guess;
    int response;
    int counter=0;

    do
    {
        answer=1+rand()%1000;
        cout<<"I have a number between 1 and 1000."<<endl;
        cout<<"Can you guess my number?"<<endl;
        cout<<"Please type your first guess."<<endl;
        cin>>guess;
        counter++;

        while(!integer(answer,guess))
        {
            cin>>guess;
            counter++;
        }

        cout<<"Excellent!You guessed the number!"<<endl;
        cout<<count(counter)<<endl;
        cout<<"Would you like to play again(y or n)?"<<endl;
        cin>>response;
    }while(response=='y');
}

int integer(int answer,int guess)
{
    if(guess==answer)
        return true;
    if(guess<answer)
        cout<<"Too low.Try again."<<endl;
    else
        cout<<"Too high.Try again."<<endl;
    return false;
}

int count(int counter)
{
    if(counter<10)
        cout<<"Either you know the secret or you got lucky!"<<endl;
    if(counter==10)
        cout<<"Ahah!you know the secret!"<<endl;
    if(counter>10)
        cout<<"You should be able to do better!";
}
