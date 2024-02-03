// Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation

#include<iostream>
using namespace std;
class address{
	public:
	string street;
	string city;
	string state;
	int zipcode;
	
	address(string s,string c,string st,int z){
	
		street = s;
		city = c;
		state = st;
		zipcode = z;	
	}
	
	void displayadd(){
		cout<<"Address"<<state<<","<<city<<","<<state<<","<<zipcode<<endl;
	}
	
};
class student{
	public:
	string name;
	int class_number,roll_no,marks;
	char grade;
	address *addre;
	
	void grade1()
	{
		if(grade>=90){
			grade = 'A';
		} else if(grade>=80)
		{
			grade = 'B';
		} else if(grade>=70){
			grade = 'C';
		} else if(grade>=60){
			grade = 'D';
		}else {
			grade = 'F';
		}
	}
			
				student(string n,int cn,int r,int m,address *add)
				{
					name = n;
					class_number = cn;
					roll_no = r;
					marks = m;
					addre = add;
				}
				void display_info()
				{
					 cout << "Name: " << name << endl;
       				 cout << "Class: " << class_number << endl;
        			 cout << "Roll Number: " << roll_no << endl;
        			 cout << "Marks: " << marks << endl;
        			 cout << "Grade: " << grade << endl;
        			 address.displayadd();
				}
		
};
int main()
{
	 Address address1("A2 panchavati", "Anytown", "AH", "12345");
    Address address2("456 Gota ", "Sometown", "AH", "67890");

    Student student1("Piyush", "12", 101, 85.5, address1);
    Student student2("jack", "11", 102, 92.0, address2);

    cout << "Student 1 Information:\n";
    student1.display_info();
    cout << "\nStudent 2 Information:\n";
    student2.display_info();
	return 0;
}
