//program on simple and multilevel inheritence
#include<iostream>
#include<string>
using namespace std;
class student{
protected:
	string name;
	int rollno;
public:
	void details(){
	cout<<"\nEnter the student name:"<<endl;
	cin>>name;
	cout<<"Enter student roll no :"<<endl;
	cin>>rollno;
	}
	void show(){
	cout<<"Student name :"<<name<<endl;
	cout<<"Roll no :"<<rollno<<endl;
	}
	
};

//simple inheritence
class marks:public student{
protected:
	int marks[3];
public:
	void getMarks(){
	cout<<"Enter the marks for 3 subjects :"<<endl;
		for (int i=0;i<3;i++){	
			cout<<"Subject"<<(i+1)<<":";
			cin>>marks[i];
				
			}
	}
		
		void showMarks(){
			cout<<"Marks obtained :"<<endl;
			for(int i=0; i<3;i++){
				cout<<"Subject"<<(i+1)<<":"<<marks[i];
			}
			
		}
};
//multilevel inheritence
class Result:public marks{
	protected:
		int totalMarks;
		float avg;
	public:
		void calculate(){
			totalMarks=0;
			for(int i=0;i<3;i++){
			
				totalMarks+=marks[i];
			}
			avg=totalMarks/3.0;
		}
		
		void showResult(){
			show();//to show student details
			showMarks();
			cout<<"Total marks :"<<totalMarks<<endl;
			cout<<"Average marks :"<<avg<<endl;
		}
	
};
int main(){
	int n;
	cout<<"Enter the number of students :";
	cin>>n;
	
	Result students[n]; //array of result objects
	
	for(int i=0 ;i<n;i++){
		cout<<"\nEnter the details of student "<<(i+1)<<":";
		students[i].details();//to get the details of the student
		students[i].show();
		students[i].calculate();
	}
	cout<<"\nDisplaying the result of all students: \n";
	for(int i=0;i<n;i++){
		cout<<"\nResult for student "<<(i+1)<<":"<<endl;
		students[i].showResult();
	}
	return 0;

}



