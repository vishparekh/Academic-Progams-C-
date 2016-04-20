# include <iostream>

int acc_no;
using namespace std;
class bank_acc
{
    int amount,k,d;
    char name[20],acc_type[20];
   public:
       void initial()
       {
           cout<<"Enter Your Account Number and Name of Your Account: "<<endl;
           cin>>acc_no>>name;
           cout<<endl;
           cout<<"Enter your Account Type and Amount:"<<endl;
           cin>>acc_type>>amount;
           cout<<endl;
       }
       void deposite()
       {
           cout<<"Enter amount to deposite:"<<endl;
           cin>>k;
           cout<<endl;
           amount=amount+k;
           cout<<"Final amount:"<<amount<<endl;
       }
       void withdraw()
      {

        cout<<"Enter amount to withdraw"<<endl;
        cin>>d;
           cout<<endl;
           amount=amount-d;
           cout<<"Final amount:"<<amount<<endl;
       }
       void display()
       {
           cout<<"Account number:"<<acc_no<<endl<<"amount:"<<amount<<endl;
       }

};
int main()
{
    int n,i,choice,a[5];
    bank_acc k[5];
    cout<<"Enter Number of Account to Feel details:"<<endl;
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
    cout<<"Index of this account is:"<<i<<endl;
       k[i].initial();
    }

    while(i!=6)
    {
    cout<<"Enter your choice:"<<endl;
    cout<<"1->Deposite 2->Withdraw 3->Display:"<<endl;
    cin>>choice;
    cout<<endl;
    cout<<"Which account index you have to access?? "<<endl;
        cin>>i;
    switch(choice)
    {
      case 1:k[i].deposite();
             k[i].display();
             break;
      case 2:k[i].withdraw();
             k[i].display();
             break;
      case 3:k[i].display();
             break;
    }
    }

    return 0;
}
