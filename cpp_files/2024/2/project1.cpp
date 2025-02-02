#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Operations { ADD = '+', SUB = '-', MUL = '*', EQ = 'E', INC = 'I', DEC = 'D', EXIT = '7' };

int main() {
    srand(time(0));  // Initialize random seed
    
    float num1 = 300 + (rand() % 201); // Random float between 300 and 500
    float num2 = 300 + (rand() % 201); // Random float between 300 and 500
    float res;
    char op;
    int temp;

    cout << "Enter Num1: " << num1 << endl;
    cout << "Enter Num2: " << num2 << endl;

    int counter = 0;  // Counter to limit random operations to 4
    do {
        if (counter >= 4) {
            op = EXIT;  // Exit after 4 operations
            break;
        }
        
        int randOp = rand() % 6; // Random operation selection
        switch (randOp) {
            case 0: op = ADD; break;
            case 1: op = SUB; break;
            case 2: op = MUL; break;
            case 3: op = EQ; break;
            case 4: op = INC; break;
            case 5: op = DEC; break;
        }

        cout << "\nSelect OP\n(+ , -, *, E, I, D, 7(exit): " << op << endl;

        switch (op) {
            case ADD:
                res = num1 + num2;
                cout << "Sum -> " << res << endl;
                break;
            case SUB:
                res = num1 - num2;
                cout << "Sub -> " << res << endl;
                break;
            case MUL:
                res = num1 * num2;
                cout << "Mult -> " << res << endl;
                break;
            case EQ:
                cout << (num1 == num2 ? "Equal" : "Not Equal") << endl;
                break;
            case INC:
                temp = (rand() % 2) + 1;
                cout << "Incrementing Num" << temp << endl;
                if (temp == 1) {
                    cout << "Incremented Num1: " << ++num1 << endl;
                } else {
                    cout << "Incremented Num2: " << ++num2 << endl;
                }
                break;
            case DEC:
                temp = (rand() % 2) + 1;
                cout << "Decrementing Num" << temp << endl;
                if (temp == 1) {
                    cout << "Decremented Num1: " << --num1 << endl;
                } else {
                    cout << "Decremented Num2: " << --num2 << endl;
                }
                break;
        }

        counter++;  // Increment the counter after each random operation
    } while (op != EXIT);

    return 0;
}
