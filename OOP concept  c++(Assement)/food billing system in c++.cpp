//Create a Project to demonstrate Simple Food Ordering Project which will help to order 
//foods . The Project should contain all the necessary requirements i.e need to use 
//conditional Statements, Loops, Function, SwitchCase and also A Program should use 
//the concept of OOP.

#include<iostream>
using namespace std;

int main()
{
	string name;
	char cont_order;
	int choice,option,quantity,total_bill;
	
	cout<<"-------Taj hotel------";
	cout<<"\n";
	cout<<"\n";
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"\n";
	cout<<"Hello,"<<name;
	cout<<"\n";
	cout<<"\n";
	cout<<"What you would like to order? ";
	cout<<"\n";
	cout<<"\n";
	cout<<"\t \t \t \t ------menu------";
	
	do{
		cout<<"\n 1).Pizza\n";
		cout<<"\n 2).Burger\n";
		cout<<"\n 3).Maggie\n";
		cout<<"\n 4).Cold drinks\n";		
		
		cout<<"\nPlease Enter your choice: ";
		cin>>choice;
		
		if(choice==1)
		{
			cout<<"\n1.Margherita		\t 90rs";
			cout<<"\n2.double cheese	\t 120rs";
			cout<<"\n3.veggie fresh		\t 130rs";
			cout<<"\n4.tomato pizza		\t 100rs";
			
			cout<<"\n \n Enter your choice from above option";
			cin>>option;
			
			cout<<"\n Enter quantity: ";
			cin>>quantity;
			
			switch(option)
				{
					case 1:
						total_bill += 90 * quantity;
						cout<<"You have selected margherita pizza";
						break;
					case 2:
						total_bill += 120 * quantity;
						cout<<"You have selected double cheese pizza";
						break;
					case 3:
						total_bill += 130 * quantity;
						cout<<"You have selected veggie fresh pizza";
						break;
					case 4:
						total_bill += 100 * quantity;
						cout<<"You have selected tomato pizza";
						break;
					default:
						cout<<"Invalid choice";			
						
				}
				cout<<endl;
				cout<<"Your total bill is: "<<total_bill;
				
				cout<<"\nDo you want place more order?(Y/N): ";
				cin>>cont_order;
			
		}
		else if(choice==2)
		{
			cout<<"\n1.Monster burger 	\t 150rs";
			cout<<"\n2.Aloo tikki burger\t 120rs";
			cout<<"\n3.veg burger		\t 100rs";
			cout<<"\n4.Asian burger		\t 130rs";
			
			cout<<"\n \n Enter your choice from above option";
			cin>>option;
			
			cout<<"\n Enter quantity: ";
			cin>>quantity;
			
			switch(option)
				{
					case 1:
						total_bill += 150 * quantity;
						cout<<"You have selected Monster burger";
						break;
					case 2:
						total_bill += 120 * quantity;
						cout<<"You have selected Aloo tikki burger";
						break;
					case 3:
						total_bill += 100 * quantity;
						cout<<"You have selected veg burger";
						break;
					case 4:
						total_bill += 130 * quantity;
						cout<<"You have selected Asian burger";
						break;
					default:
						cout<<"Invalid choice";			
						
				}
				cout<<endl;
				cout<<"Your total bill is: "<<total_bill;
				
				cout<<"\nDo you want place more order?(Y/N): ";
				cin>>cont_order;
		}
		else if(choice==3)
		{
			cout<<"\n1.Masala maggie	   \t 60rs";
			cout<<"\n2.Veg maggie		   \t 80rs";
			cout<<"\n3.Cheese maggie	   \t 100rs";
			cout<<"\n4.double masala maggie\t 120rs";
			
			cout<<"\n \n Enter your choice from above option";
			cin>>option;
			
			cout<<"\n Enter quantity: ";
			cin>>quantity;
			switch(option)
				{
					case 1:
						total_bill += 60 * quantity;
						cout<<"You have selected Masala maggie";
						break;
					case 2:
						total_bill += 80 * quantity;
						cout<<"You have selected Veg maggie";
						break;
					case 3:
						total_bill += 100 * quantity;
						cout<<"You have selected Cheese maggie";
						break;
					case 4:
						total_bill += 120 * quantity;
						cout<<"You have selected double masala maggie";
						break;
					default:
						cout<<"Invalid choice";			
						
				}
				cout<<endl;
				cout<<"Your total bill is: "<<total_bill;
				
				cout<<"\nDo you want place more order?(Y/N): ";
				cin>>cont_order;
		}
		else if(choice==4)
		{
			cout<<"\n1.Pepsi	\t 40rs";
			cout<<"\n2.Coco cola\t 40rs";
			cout<<"\n3.Maaza	\t 50rs";
			cout<<"\n4.Sprite	\t 40rs";
			
			cout<<"\n \n Enter your choice from above option";
			cin>>option;
			
			cout<<"\n Enter quantity: ";
			cin>>quantity;
			switch(option)
				{
					case 1:
						total_bill += 40 * quantity;
						cout<<"You have selected Pepsi";
						break;
					case 2:
						total_bill += 40 * quantity;
						cout<<"You have selected coco cola";
						break;
					case 3:
						total_bill += 50 * quantity;
						cout<<"You have selected maaza";
						break;
					case 4:
						total_bill += 40 * quantity;
						cout<<"You have selected sprite";
						break;
					default:
						cout<<"Invalid choice";			
						
				}
				cout<<endl;
				cout<<"Your total bill is: "<<total_bill;
				
				cout<<"\nDo you want place more order?(Y/N): ";
				cin>>cont_order;
		}
	}
	while(cont_order == 'y' || cont_order == 'Y');
	
		cout<<"Your revised bill is: "<<total_bill;

	return 0;
}
