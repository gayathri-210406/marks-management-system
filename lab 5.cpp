#include <iostream>
using namespace std;

class Event {
private:
string eventName;
string eventDate;

public:
Event() {
eventName = "unknown";
eventDate = "01/01/2024";
}
Event(string name, string date) {
eventName = name;
eventDate = date;
}

Event( Event &other) {
eventName = other.eventName;
eventDate = other.eventDate;
}

void display() {
cout << "Event Name: " << eventName << endl;
cout << "Event Date: " << eventDate << endl << endl;
}
};

int main() {
int choice;

do {
string name, date;

cout << "Enter Event Name: ";
cin >>name;

cout << "Enter Event Date (DD/MM/YYYY): ";
cin>> date;

Event userEvent(name, date);
userEvent.display();

cout << "Do you want to enter another event? (enter 1 for YES and 0 for NO): ";
cin >> choice;
cin.ignore();

} while (choice ==0);
cout<<"Thank you.";

return 0;
}