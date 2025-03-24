#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

class Student {
    string name, city;
    int rollno, phone;
    float marks[5], avg;

public:
    void get() {
        srand(time(0)); // Seed random number generator

        // Array of random names
        string names[] = {"Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry", "Isabella", "Jack"};
        int nameCount = sizeof(names) / sizeof(names[0]);
        name = names[rand() % nameCount]; // Select a random name

        rollno = rand() % 10 + 2; // Random roll number (2 to 11)
        phone = rand() % 900000000 + 100000000; // Ensures a 9-digit number
        city = "RandomCity"; // Placeholder city

        float sum = 0;
        for (float &m : marks) {
            m = rand() % 10 + 1; // Marks between 1-10
            sum += m;
        }
        avg = sum / 5;
    }

    void display() {
        cout << "\n" << name << " | Roll: " << rollno << " | Phone: " << phone
             << " | City: " << city << " | Avg: " << avg << endl;
    }
};

int main() {
    srand(time(0)); // Initialize random seed once in main

    Student students[5], *ptr;
    
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        ptr = &students[i];
        ptr->get();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; i++) {
        ptr = &students[i];
        ptr->display();
    }

    return 0;
}

