#include <iostream>
using namespace std;

class MarksManagement {
private:
    int* marks;  
    int numSubjects; 

public:
    MarksManagement(int n) {
        numSubjects = n;
        marks = new int[numSubjects];
    }

    ~MarksManagement() {
        delete[] marks;
    }

    int& operator[](int index) {
        if (index < 0 || index >= numSubjects) {
            cout << "Index out of bounds!" << endl;
            exit(1);  
        }
        return marks[index];
    }

    const int& operator[](int index) const {
        if (index < 0 || index >= numSubjects) {
            cout << "Index out of bounds!" << endl;
            exit(1);  
        }
        return marks[index];
    }

    void displayMarks() {
        cout << "Marks for " << numSubjects << " subjects:" << endl;
        for (int i = 0; i < numSubjects; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter the number of subjects: ";
    cin >> n;

    MarksManagement mm(n);

    cout << "Enter marks for " << n << " subjects:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Marks for subject " << i + 1 << ": ";
        cin >> mm[i];  
    }

    mm.displayMarks();

    return 0;
}
