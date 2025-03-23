#include<iostream>
#include<cstdlib> // For rand() and srand()
#include<ctime>   // For time()
using namespace std;

class Room {
    double length, breadth;
public:
    void get() {
        length = rand() % 20 + 5; // Random length between 5 and 24
        breadth = rand() % 20 + 5; // Random breadth between 5 and 24
    }
    
    void display() {
        cout << "\nRoom length: " << length;
        cout << "\nRoom breadth: " << breadth;
    }
    
    double area() {
        return length * breadth;
    }
    
    double perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    srand(time(0)); // Seed the random number generator
    
    for (int i = 1; i <= 5; i++) {
        Room r;
        r.get();
        cout << "\n\nRoom is: " << i << endl;
        r.display();
        cout << "\nArea: " << r.area();
        cout << "\tPerimeter: " << r.perimeter();
        cout<<"\n";
    }
}
