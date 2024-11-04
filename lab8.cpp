#include<iostream>
using namespace std;

class Marks {
private:
    int subject1, subject2, subject3;

public:
    friend void inputMarks(Marks &m);
    friend int calculateTotal(Marks m);
    friend void displayTotal(Marks m);
};

void inputMarks(Marks &m) {
    cout << "Enter marks for Subject 1: ";
    cin >> m.subject1;
    cout << "Enter marks for Subject 2: ";
    cin >> m.subject2;
    cout << "Enter marks for Subject 3: ";
    cin >> m.subject3;
}

int calculateTotal(Marks m) {
    return m.subject1 + m.subject2 + m.subject3;
}

void displayTotal(Marks m) {
    int total = calculateTotal(m);
    cout << "Total Marks: " << total << endl;
}

int main() {
    Marks student;
	inputMarks(student);
	displayTotal(student);
	return 0;
}
