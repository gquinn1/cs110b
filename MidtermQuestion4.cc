#include <iostream>
using namespace std;

int main() {
   
  class Person {
  public:
    string lastName;
    string firstName;
    string name();
    string idNumber;
    string title;
    string department;
    int rate;
    int weeklyHours;
  };

    Person p;
    p.lastName = "Wilhelm ";
    p.firstName = "Charlotte ";
    p.idNumber = "W1051293 ";
    p.title = "Videographer "; 
    p.department = "Taxation and Accounting ";
    p.rate = 20;
    p.weeklyHours = 30;

    cout << "Employee Information: " << endl;
    cout << "Last Name: " << p.lastName << endl;
    cout << "First Name: " << p.firstName << endl;
    cout << "ID Number: " << p.idNumber << endl;
    cout << "Title: " << p.title << endl;
    cout << "Department " << p.department << endl;
    cout << "Hourly Rate: $" << p.rate << endl;
    cout << "Weekly Hours: $" << p.weeklyHours << endl;

    double weeklyWages = p.rate * p.weeklyHours;
    cout << "Weekly Wages: $" << weeklyWages << endl;
  
    return 0;
}

