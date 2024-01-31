//ATM system in c++
#include<iostream>
#include<string>
using namespace std;
class atm{
	string name;
	int acc_no,tot_bal,amt;
	char type_of_acc;
	
	public:
		void set_detail(){
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your account number: ";
			cin>>acc_no;
			cout<<"Enter type of account: ";
			cin>>type_of_acc;
			
		}
		void show()
		{
			cout<<"Name: "<< name <<endl;
			cout<<"Account number: "<< acc_no <<endl;
			cout<<"Type of account: "<< type_of_acc <<endl;
			cout<<"Total balance: "<< tot_bal <<endl;
		}
		void deposit()
		{
			cout<<"Enter amount to be deposit: ";
			cin>>amt;
		}
		void show_bal()
		{
			tot_bal = tot_bal + amt;
			cout<<"\nTotal balance: "<<tot_bal;
		}
		void withdrawl()
		{
			int a,wd_amt;
			cout<<"Enter amout to withdraw: ";
			cin>>a;
			wd_amt = tot_bal - a;
			cout<<" Available balance is "<<wd_amt;
		}
};
int main()
{
	atm b;
	
	int choice;
	while (1) {
        cout << "\n--------------------------"
             << "----------------------------"
             << "---Online ATM SYSTEM--------"
             << "----------------------------"
             << "-----\n\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter name, Account "
             << "number, Account type\n";
        cout << "\t2. Balance Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";
        cin >> choice;
        
        switch(choice)
        {
        	case 1:
        		b.set_detail();
        		break;
        	case 2:
				b.show();
				break;
			case 3:
				b.deposit();
				break;
			case 4:
				b.show_bal();
				break;
			case 5:
				b.withdrawl();
				break;
			case 6:
				exit(1);
				break;
			default:
				cout<<"Invalid choice";
				break;	
		}
		return 0;
	}
}
