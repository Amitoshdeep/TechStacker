#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swapByValue(int a, int b) { int temp = a; a = b; b = temp; }  // No effect outside

void swapByAddress(int *a, int *b) { int temp = *a; *a = *b; *b = temp; }  // Uses pointers

void swapByReference(int &a, int &b) { int temp = a; a = b; b = temp; }  // Uses references

int main() {
    srand(time(0));  // Seed for randomness
    int x = rand() % 100 + 1;  // Random number (1-100)
    int y = rand() % 100 + 1;  // Random number (1-100)

    cout << "Original Numbers: x=" << x << " y=" << y << endl;

    swapByValue(x, y);
    cout << "After swapByValue: x=" << x << " y=" << y << " (No change)\n";

    swapByAddress(&x, &y);
    cout << "After swapByAddress: x=" << x << " y=" << y << endl;

    swapByReference(x, y);
    cout << "After swapByReference: x=" << x << " y=" << y << endl;

    return 0;
}
