#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

class FunctionCall {
    int num1, num2;

public:
    void get() {
        srand(time(0)); // Seed random number generator
        num1 = rand() % 13 + 5;
        num2 = rand() % 15 + 3;
        cout << "Generated numbers: " << num1 << " and " << num2 << endl;
    }

    int add(int a, int b) {
        return a + b;
    }

    void multiply(int *a, int *b, int *res) {
        *res = (*a) * (*b);
    }

    void divide(int a, int b, int &res) {
        if (b != 0)
            res = a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            res = 0; // Assign a default value to prevent undefined behavior
        }
    }

    void performOperation() {
        int res;
        cout << "Addition: " << add(num1, num2) << endl;

        multiply(&num1, &num2, &res);
        cout << "Multiplication: " << res << endl;

        divide(num1, num2, res);
        cout << "Division: " << res << endl;
    }
};

int main() {
    FunctionCall obj;
    obj.get();
    obj.performOperation();

    return 0;
}

