#include <iostream>
#include <string>
using namespace std;

class MarksManagement {
private:
    static int totalStudents;  
    string studentName;
    int marks;

public:
    MarksManagement(string name, int m) {
        studentName = name;
        marks = m;
        totalStudents++;  
    }

    static int getTotalStudents() {
        return totalStudents;
    }

    void display() {
        cout << "Student Name: " << studentName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int MarksManagement::totalStudents = 0;

int main() {
    MarksManagement student1("Gayathri", 85);
    MarksManagement student2("Sanjay", 90);
    MarksManagement student3("Nusaif", 78);
    
    student1.display();
    student2.display();
    student3.display();

    
    cout << "Total number of students: " << MarksManagement::getTotalStudents() << endl;

    return 0;
}
