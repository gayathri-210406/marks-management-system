#include <iostream>
#include <string>
using namespace std;

class user {
public:
    string name;
    int marks;
    static int userCount;

    user() : name(""), marks(0) {}

    user(string name, int marks) {
        this->name = name;
        this->marks = marks;
        userCount++;
    }

    user& operator++() { 
        marks++;
        return *this;
    }

    user& operator--() { 
        marks--;
        return *this;
    }

    bool operator!() { 
        return marks == 0;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int user::userCount = 0;

int main() {
    int n;
    cout << "Enter the number of users: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of users." << endl;
        return 1; 
    }

    user* users = new user[n]; 
    for (int i = 0; i < n; i++) {
        string name;
        int marks;

        cout << "Enter the name of user " << i + 1 << ": ";
        cin >> name;

        do {
            cout << "Enter marks for user " << i + 1 << ": ";
            cin >> marks;
            if (marks < 0) {
                cout << "Marks cannot be negative. Please enter again." << endl;
            }
        } while (marks < 0); 
        users[i] = user(name, marks); 
    }

   
    for (int i = 0; i < n; i++) {
        
        ++users[i]; 
        if (!users[i]) {
            cout << "User " << users[i].name << " has zero marks!" << endl;
        }
    }

    cout << "\nUser information after using operators:\n";
    for (int i = 0; i < n; i++) {
        users[i].display(); 
    }

    if (n > 0) {
        cout << "Decrementing marks for user " << users[0].name << "..." << endl;
        --users[0];
    }

    cout << "\nUser information after decrementing the first user's marks:\n";
    for (int i = 0; i < n; i++) {
        users[i].display(); 
    }

    cout << "\nTotal users: " << user::userCount << endl;

    delete[] users; 
    return 0;
}
