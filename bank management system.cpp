#include<iostream>
#include<string>
class bankaccount
{
    std::string name;
    double balance;
    public :
    bankaccount (std::string accountname, double initialbalance) 
    : name(accountname),balance(initialbalance){}
    void deposit(double amount)
    {
        if (amount>0)
        {
            balance+=amount;
        }
    }
    void withdraw(double amount)
    {
        if(amount<=balance)
        {
            balance-=amount;
        }
        else 
        {
            std::cout<< "Insufficient funds."<<std::endl;
        }
    }
    void display()
    {
        std::cout <<"Account:"<<name<<"\nBalance: $"<<balance<<std::endl;
    }
};
int main()
{
    std::string name;
    double initialdeposit;
    std::cout<<"Enter your name:";
    getline(std::cin,name);
    std::cout<<"Enter initial deposit:";
    std::cin>> initialdeposit;
    bankaccount account(name,initialdeposit);
    int choice;
    double amount;
    do{
        std::cout<<"\n1. Deposit"<<std::endl;
        std::cout<<"2. Withdraw"<<std::endl;
        std::cout<<"3. Display Account"<<std::endl;
        std::cout<<"4. Exit"<<std::endl;
        std::cout<<" \nEnter choice :";
        std::cin>>choice;
        switch(choice)
        {
            case 1:
            std::cout << "Enter Deposit Ammount :";
            std::cin>>amount;
            account.deposit(amount);
            break;
            case 2:
            std::cout<<"ENter Withdrawal Amount :";
            std::cin>>amount;
            account.withdraw(amount);
            break;
            case 3:
            account.display();
            break;
            case 4:
            break;
            default:
            std::cout<<"Invalid Choice."<<std::endl;
        }
    }while(choice != 4);
    return 0;
    }
