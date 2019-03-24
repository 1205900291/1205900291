#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    Account(int x)
    {
        if(x<0)
        {
            rest=0;
        cout<<"初始余额无效";
        }
        else
            rest=x;
    }

    int credit(int a)
    {
        rest=rest+a;
        return rest;
    }


    int debit(int b)
    {
        if(b>rest)
            cout<<"Debit amount exceeded account balance.";
        else
            rest=rest-b;
            return rest;
    }


    void getBalance() const
    {
        cout<<"余额"<<rest;
    }

private:
    int rest;
};

int main()
{
    Account account1(20000);
    account1.getBalance();
    cout<<"存入金额";
    int a;
    cin>>a;
    account1.credit(a);
    account1.getBalance();
    cout<<"取出金额";
    int b;
    cin>>b;
    account1.debit(b);
    account1.getBalance();

    Account account2(30000);
    account2.getBalance();
    cout<<"存入金额";
    int c;
    cin>>c;
    account2.credit(c);
    account2.getBalance();
    cout<<"取出金额”；
    int d;
    cin>>d;
    account2.debit(d);
    account2.getBalance();
}
