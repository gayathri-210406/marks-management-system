#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    Employee(string n, int a, double s) : name(n), age(a), salary(s) {}
    void display() {
        cout << "Name: " << name << "\nAge: " << age << "\nSalary: " << salary << endl;
    }


    void updateSalaryByValue(double s) {
        s = s + 1000; 
        cout << "Salary after update (pass by value): " << s << endl;
    }

    void updateSalaryByReference(double& s) {
        s = s + 1000; 
    }

    double& getSalary() {
        return salary; 
    }
};

int main() {
    Employee emp1("John", 30, 5000);

    cout << "Employee details before update:\n";
    emp1.display();

    double newSalary = 5000;

    emp1.updateSalaryByValue(newSalary);
    cout << "New salary after pass by value: " << newSalary << endl;

    emp1.updateSalaryByReference(newSalary);
    cout << "New salary after pass by reference: " << newSalary << endl;
    
    double& refSalary = emp1.getSalary();
    refSalary = 7000; 

    cout << "\nEmployee details after return by reference:\n";
    emp1.display();

    return 0;
}
