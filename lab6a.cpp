#include<iostream>
using namespace std;

class smarks{
	private:
		
		string studentname;
		string s_subject;
		int s_marks;
	
	public:
		smarks(string name){
			studentname=name;
			s_subject="";
			s_marks= 0;
		}
		smarks(string name,string subject){
			studentname=name;
			s_subject=subject;
			s_marks= 0;
		}
		smarks(string name,string subject, int marks){
			studentname=name;
			s_subject=subject;
			s_marks=marks;
		}
void display()
{
	cout<<"Student name: "<<studentname<<endl;
	cout<<"Subject: "<<s_subject<<endl;
	cout<<"Marks: "<<s_marks;
}		
};

int main(){
	smarks mark1("Gayathri");
	smarks mark2("Aleena","PSD");
	smarks mark3("Sarah","C++",50);
    cout<<"Student 1 details: \n";
    mark1.display(); 
	cout<<"\nStudent 2 details: \n";
	mark2.display();
	cout<<"\nStudent 3 details: \n";
	mark3.display();
	return 0;	
}

