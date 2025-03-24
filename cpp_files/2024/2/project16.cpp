#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

class FunctionCall {
    float num1, num2;

public:
    void get() {
        srand(time(0)); // Seed random number generator
        num1 = static_cast<float>(rand() % 13 + 5);
        num2 = static_cast<float>(rand() % 15 + 3);
        cout << "Generated numbers: " << num1 << " and " << num2 << endl;
    }

    float add(float a, float b) {
        return a + b;
    }

    void multiply(float *a, float *b, float *res) {
        *res = (*a) * (*b);
    }

    void divide(float a, float b, float &res) {
        if (b != 0)
            res = a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            res = 0.0f; // Assign a default value
        }
    }

    void performOperation() {
        float res;
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
