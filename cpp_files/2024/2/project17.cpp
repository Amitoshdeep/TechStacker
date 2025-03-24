#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

class Employee {
    string name;
    int id;
    double salary;

public:
    Employee() : name("Unknown"), id(0), salary(0.0) {
        cout << "Default Constructor\n";
    }

    Employee(string n, int i, double s) : name(n), id(i), salary(s) {
        cout << "Parameterized Constructor\n";
    }

    Employee(const Employee &e) : name(e.name), id(e.id), salary(e.salary) {
        cout << "Copy Constructor\n";
    }

    ~Employee() {
        cout << "Destructor for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e1, e2("John", 101, 50000), e3(e2);
    e1.display();
    e2.display();
    e3.display();

    return 0;
}

