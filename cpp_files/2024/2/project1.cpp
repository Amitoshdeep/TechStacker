#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Operations { ADD = '+', SUB = '-', MUL = '*', EQ = 'E', INC = 'I', DEC = 'D', EXIT = '7' };

int main() {
    float num1 = 300 + (rand() % 201); // Random float between 300 and 500
    float num2 = 300 + (rand() % 201); // Random float between 300 and 500
    float res;
    char op;
    int temp;

    cout << "Generated Num1: " << num1 << endl;
    cout << "Generated Num2: " << num2 << endl;

    do {
        int randOp = rand() % 6; // Random operation selection
        switch (randOp) {
            case 0: op = ADD; break;
            case 1: op = SUB; break;
            case 2: op = MUL; break;
            case 3: op = EQ; break;
            case 4: op = INC; break;
            case 5: op = DEC; break;
        }

        cout << "\nSelected OP: " << op << endl;

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
    } while (op != EXIT);
    
    return 0;
}
