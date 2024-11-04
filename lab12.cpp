//program 12 on new and delete operator
#include <iostream>
using namespace std;

class MarksManagement {
private:
    int* marks;   
    int numStudents; 

public:
    MarksManagement(int num) {
        numStudents = num;
        marks = new int[numStudents]; //memory allocation (new operator)
    }

    ~MarksManagement() {
        delete[] marks;  //memory deallocation (delete operator)
    }

    void inputMarks() {
        cout << "Enter marks for " << numStudents << " students out of 100 marks :" << endl;
        for (int i = 0; i < numStudents; i++) {
            cout << "Marks of student " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "\nMarks of Students:" << endl;
        for (int i = 0; i < numStudents; i++) {
            cout << "Student " << i + 1 << ": " << marks[i] << endl;
        }
    }

    void averageMarks() {
        int total = 0;
        for (int i = 0; i < numStudents; i++) {
            total += marks[i];
        }
        double average = total / numStudents;
        cout << "\nAverage Marks: " << average << endl;
        if(average>=90){
        	cout<<"A grade"<<endl;
		}
		else if(average>=80){
			cout<<"B grade"<<endl;
		}
		else if(average>=70){
			cout<<"C grade"<<endl;
		}
		else{
			cout<<"D grade"<<endl;
		}
		
	
	}

};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    MarksManagement mm(n);

    mm.inputMarks();    
    mm.displayMarks();  
    mm.averageMarks();  

    return 0;
}
