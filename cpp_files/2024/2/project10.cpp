#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int *p;
    int **pp; // Corrected: Now pp is a pointer to a pointer

    p = &x;  // p stores the address of x
    pp = &p; // pp stores the address of p

    cout << "Value of x: " << x << "\n";
    cout << "Address of x: " << &x << "\n";
    cout << "Value of p (Address of x): " << p << "\n";
    cout << "Address of p: " << &p << "\n";
    cout << "Value of pp (Address of p): " << pp << "\n";
    cout << "Value at address pointed by pp " << *pp << "\n";
    cout << "Value at the address pointed by *pp: " << **pp << "\n";

    return 0;
}

