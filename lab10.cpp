#include <iostream>
using namespace std;

class Marks {
private:
    int subject1, subject2, subject3;

public:
    Marks(int s1 = 0, int s2 = 0, int s3 = 0) : subject1(s1), subject2(s2), subject3(s3) {}

    void display() const {
        cout << "Subject 1: " << subject1 << "\n"
             << "Subject 2: " << subject2 << "\n"
             << "Subject 3: " << subject3 << "\n"
             << "Total: " << (subject1 + subject2 + subject3) << "\n";
    }

    Marks operator+(const Marks &m) {
        return Marks(subject1 + m.subject1, subject2 + m.subject2, subject3 + m.subject3);
    }

    Marks operator-(const Marks &m) {
        return Marks(subject1 - m.subject1, subject2 - m.subject2, subject3 - m.subject3);
    }

    bool operator==(const Marks &m) {
        return (subject1 + subject2 + subject3) == (m.subject1 + m.subject2 + m.subject3);
    }
};

int main() {
    Marks student1(80, 90, 85);
    Marks student2(75, 85, 80);

    cout << "Marks of Student 1:\n";
    student1.display();.llo
    cout << "\nMarks of Student 2:\n";
    student2.display();
    
    Marks totalMarks = student1 + student2;
    cout << "\nTotal Marks after adding Student 1 and Student 2:\n";
    totalMarks.display();

    Marks diffMarks = student1 - student2;
    cout << "\nDifference of Marks between Student 1 and Student 2:\n";
    diffMarks.display();

    if (student1 == student2) {
        cout << "\nTotal marks of both students are equal.\n";
    } else {
        cout << "\nTotal marks of both students are not equal.\n";
    }

    return 0;
}
