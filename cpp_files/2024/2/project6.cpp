#include <iostream>
#include <cstdlib>  // For rand() function
#include <ctime>    // For seeding random values
using namespace std;

void bill(float units) {
    float total = (units <= 100) ? units * 1.5 :
                  (units <= 200) ? (100 * 1.5) + ((units - 100) * 2.5) :
                  (100 * 1.5) + (100 * 2.5) + ((units - 200) * 3.5);

    cout << "Units Consumed: " << units << "\nTotal Bill -> Rs. " << total << endl;
}

int main() {
    srand(time(0));  // Seed for random number generation

	float randomUnits = rand() % 501;  // Random units between 0 and 500
	bill(randomUnits);
    
    return 0;
}

