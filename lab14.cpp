//program on multiple and hybrid inheritence
#include <iostream>
#include <string>

using namespace std;

class Student { //base class
protected:
    string name;
    int roll_no;
public:
    void getStudentInfo() {
        cout << "Enter student name: ";
        cin>>name;
        cout << "Enter roll number: ";
        cin >> roll_no;
        
    }

    void showStudentInfo() {
        cout << "Name: " << name << ", Roll Number: " << roll_no << endl;
    }
};

class Marks {
protected:
    int marks1, marks2, marks3;
public:
    void getMarks() {
        cout << "Enter marks for Subject 1  out of 100 : ";
        cin >> marks1;
        cout << "Enter marks for Subject 2 out of 100 : ";
        cin >> marks2;
        cout << "Enter marks for Subject 3 out of 100 : ";
        cin >> marks3;
    }

    void showMarks() {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Marks in Subject 3: " << marks3 << endl;
    }
};

//multiple inheritence
class Result : public Student, public Marks {
protected:
    int total;
    float average;
    char grade;

    void calculateResult() {
        total = marks1 + marks2 + marks3;
        average = total / 3.0;

        if (average >= 90) grade = 'A';
        else if (average >= 80) grade = 'B';
        else if (average >= 70) grade = 'C';
        else if (average >= 60) grade = 'D';
        else grade = 'F';
    }

public:
    void getResult() {
        getStudentInfo();
        getMarks();
        calculateResult();
    }

    void showResult() {
        showStudentInfo();
        showMarks();
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

class Sports { 
protected:
    int sportsMarks;
public:
    void getSportsMarks() {
        cout << "Enter marks for Sports out of 100 : ";
        cin >> sportsMarks;
    }

    void showSportsMarks() const {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

//multiple inheritence(hybrid)
class FinalResult : public Result, public Sports {
protected:
    int finalTotal;
    float finalAverage;
    char finalGrade;

    void calculateFinalResult() {
        finalTotal = total + sportsMarks;
        finalAverage = finalTotal / 4.0;

        if (finalAverage >= 90) finalGrade = 'A';
        else if (finalAverage >= 80) finalGrade = 'B';
        else if (finalAverage >= 70) finalGrade = 'C';
        else if (finalAverage >= 60) finalGrade = 'D';
        else finalGrade = 'F';
    }

public:
    void getFinalResult() {
        getResult(); 
        getSportsMarks(); 
        calculateFinalResult();
    }

    void showFinalResult() {
        showResult(); 
        showSportsMarks(); 
        cout << "Final Total (Including Sports): " << finalTotal << endl;
        cout << "Final Average: " << finalAverage << endl;
        cout << "Final Grade: " << finalGrade << endl;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    FinalResult students[numStudents]; // Array of FinalResult objects

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEntering data for student " << i + 1 << ":\n";
        students[i].getFinalResult();
    }

    cout << "\nDisplaying all students' results:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "\nResult of student " << i + 1 << ":\n";
        students[i].showFinalResult();
    }

    return 0;
}
