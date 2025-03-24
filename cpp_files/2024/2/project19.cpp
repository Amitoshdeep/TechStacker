#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

class Rectangle {
public:
    int length, width;

    Rectangle(int l, int w) : length(l), width(w) {}

    friend int calculateArea(const Rectangle& r); // Use const reference
};

int calculateArea(const Rectangle& r) {
    return r.length * r.width;
}

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    friend class Friend;
};

class Friend {
public:
    void display(const Person& p) { 
        cout << "Name: " << p.name << ", Age: " << p.age << endl;
    }
};

int main() {
    Rectangle rect(5, 10);
    cout << "Area: " << calculateArea(rect) << endl; // Added endl for clarity

    Person person("Radhika", 20);
    Friend f;
    f.display(person);

    return 0;
}

