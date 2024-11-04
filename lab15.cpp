//implementation of virtual functions
//program to calculate % of marks for 5 subjects
#include<iostream>
using namespace std;

class student{
	protected:
		string name;
		float marks[5];
		float percentage;
		
	public:
		void inputDetails(){
			cout<<"Enter student name:";
			cin>>name;
			cout<<"Enter marks for 5 subjects (out of 100) :"<<endl;
			for(int i=0;i<5;i++){
				cout<<"Subject "<<(i+1)<<":";
				cin>>marks[i];
			}
		}
		
		virtual void calculatePercentage(){
			float total=0;
			for(int i=0;i<5;i++){
			total+=marks[i];
			}
			percentage=(total/500)*100;
			
		}
		
		void display(){
			cout<<"student name:"<<name<<endl;
			cout<<"Marks obtained :";
			for(int i=0;i<5;i++){
				cout<<marks[i]<<"";
			}
			cout<<endl;
			cout<<"Percentage "<<percentage<<"%"<<endl;
		}
};

class Result:public student{
	public:
			void calculatePercentage(){
			float total=0;
			for(int i=0;i<5;i++){
				total+=marks[i];
			}
			percentage=(total/500)*100;
		}
};

int main(){
	Result s;
	s.inputDetails();
	s.calculatePercentage();
	s.display();
	return 0;
}