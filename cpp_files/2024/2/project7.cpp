#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

int pow(int base, int exp) {
    return (exp == 0) ? 1 : base * pow(base, exp - 1);
}

int main() {
    srand(time(0)); // Seed for randomness

    int base = rand() % 10 + 1;   // Random base (1 to 10)
    int exp = rand() % 6;         // Random exponent (0 to 5)

    cout << base << "^" << exp << " = " << pow(base, exp) << endl;
    return 0;
}

