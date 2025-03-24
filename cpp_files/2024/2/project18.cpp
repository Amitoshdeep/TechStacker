#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

class Student {
    string name, city;
    int rollno, phone;
    float marks[5], avg;

public:
    void get(int studentNumber) {
        // Simulating real-time user input
        cout << "\nEntering details for Student " << studentNumber << "...\n";

        // Array of random names
        string names[] = {"Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry", "Isabella", "Jack"};
        int nameCount = sizeof(names) / sizeof(names[0]);
        name = names[rand() % nameCount]; // Select a random name
        cout << "Enter Name: " << name << endl;

        rollno = rand() % 10 + 2; // Random roll number (2 to 11)
        cout << "Enter Roll Number: " << rollno << endl;

        phone = rand() % 900000000 + 100000000; // Ensures a 9-digit number
        cout << "Enter Phone Number: " << phone << endl;

        city = "RandomCity"; // Placeholder city
        cout << "Enter City: " << city << endl;

        float sum = 0;
        cout << "Enter Marks: ";
        for (int i = 0; i < 5; i++) {  
            marks[i] = rand() % 10 + 1; // Marks between 1-10
            sum += marks[i];
            cout << marks[i] << " ";
        }
        avg = sum / 5;
        cout << "\nCalculated Average: " << avg << endl;
    }

    void display() {
        cout << "\n" << name << " | Roll: " << rollno << " | Phone: " << phone
             << " | City: " << city << " | Avg: " << avg << endl;
    }
};

int main() {
    srand(time(0)); // Initialize random seed ONCE in main

    Student students[5];
    
    for (int i = 0; i < 5; i++) {
        students[i].get(i + 1); // Pass student number for realistic interaction
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}
