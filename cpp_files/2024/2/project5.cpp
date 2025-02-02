#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

const int ARRAY_SIZE = 10; // Define array size

// Enum for search result
enum SearchResult { NOT_FOUND, FOUND };

int main() {
    srand(time(0)); // Seed random number generator
    int arr[ARRAY_SIZE];
    
    // Generate random numbers for the array
    cout << "Array: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 100; // Random numbers between 0-99
        cout << arr[i] << " ";
    }
    cout << endl;

    int key = rand() % 100; // Automatically generate search key
    cout << "Enter the num to search for: " << key << endl;

    SearchResult result = NOT_FOUND;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] == key) {
            result = FOUND;
            break;
        }
    }

    if (result == FOUND)
        cout << "Found the item." << endl;
    else
        cout << "The entered number is not in the array." << endl;

    return 0;
}
