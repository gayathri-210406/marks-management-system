#include<iostream>
#include<string>
using namespace std;

double caltotal(double sub1, double sub2=80, double sub3=70, double sub4=90)
{
    return sub1 + sub2 + sub3 + sub4;
}

double avgmarks(double totalmarks, int no_subjects)
{
    return totalmarks / no_subjects;
}

char grades(double avgmarks) 
{
    if(avgmarks >= 90) 
    {
        return 'A';
    }
    else if(avgmarks >= 80) return 'B';
    else if(avgmarks >= 70) return 'C';
    else if(avgmarks >= 60) return 'D';
    else return 'E';
}

int main()
{
    double sub1, sub2 = 80, sub3 = 70, sub4; 
    double totalmarks, avg_marks; 
    char grade, choice;
    int no_subjects = 4; 

    string student_name;

    cout << "Enter the student's name: ";
    cin >> student_name;

    cout << "Enter the marks for subject 1: ";
    cin >> sub1;

    cout << "Do you want to enter the marks for subject 2? (y/n): ";
    cin >> choice;
    if(choice == 'y' || choice == 'Y')
    {
        cout << "Enter the marks for subject 2: ";
        cin >> sub2;
    }

    cout << "Do you want to enter the marks for subject 3? (y/n): ";
    cin >> choice;
    if(choice == 'y' || choice == 'Y')
    {
        cout << "Enter the marks for subject 3: ";
        cin >> sub3;
    }

    cout << "Enter the marks for subject 4: ";
    cin >> sub4;

    totalmarks = caltotal(sub1, sub2, sub3, sub4);
    avg_marks = avgmarks(totalmarks, no_subjects); 
    grade = grades(avg_marks); 

    cout << "Student name: " << student_name << "\n";
    cout << "Total marks: " << totalmarks << "\n";
    cout << "Average marks: " << avg_marks << "\n";
    cout << "Grade: " << grade << "\n";

    return 0;
}

