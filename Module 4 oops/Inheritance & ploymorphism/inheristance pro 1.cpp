// Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)

#include<iostream>
using namespace std;
class cricketer{
	public:
		string name;
		int run,avg_runs,best_performance,matches_played;

		void input_data()
		{
			cout<<"Enter your name: "<<endl;
			cin>>name;
			
			cout<<"Enter total runs: "<<endl;
			cin>>run;
			
			cout<<"Enter how many time you have hitted 100 runs: "<<endl;
			cin>>best_performance;
		}
		void cal_avg()
		{
			cout<<"Enter number of matches played: "<<endl;
			cin>>matches_played;
			
			avg_runs = run / matches_played;
			
		}
		
};
class batsman:public cricketer{
	public:
	
		void display()
		{
			cout<<"Name of batsman: "<<name<<endl;
			cout<<"Total runs: "<<run<<endl;
			cout<<"Average run score: "<<avg_runs<<endl;
			cout<<"Best performance: "<<best_performance<<endl;
			
		}
	
};

int main()
{
	batsman b;
	b.input_data();
	b.cal_avg();
	b.display();
	
	return 0;
}
