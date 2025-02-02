#include<iostream>
#include<cstdlib> // For rand() and srand()
#include<ctime>   // For time()

using namespace std;

void atm() {
    int ch;
    float bal = 0.0f, dMoney, wMoney; // Initialize balance to 0.0
    srand(time(0)); // Initialize random seed
    int iterations = 0; // Counter for loop iterations

//    cout << "AMITOSHDEEP 7038" << endl;

    do {
        // Stop after 5 iterations
        if (iterations >= 5) {
            cout << "Exiting..." << endl;
            break;
        }

        cout << "============== ATM ===========" << endl << endl;
        cout << "1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit" << endl;

        // Randomly choose an option (1-4)
        ch = rand() % 4 + 1;
        cout << "Choice: " << ch << endl;
        
        switch(ch) {
            case 1:
                cout << "Your Balance is: " << bal << "\n\n";
                break;

            case 2:
                // Random deposit amount between 10 and 5000
                dMoney = rand() % 5001 + 10;
                cout << "Deposit Amount: " << dMoney << endl;
                if (dMoney > 0) {
                    bal += dMoney;
                    cout << "Successfully Deposited !! \n\n";
                }
                break;

            case 3:
                // Random withdrawal amount between 10 and 5000
                wMoney = rand() % 5001 + 10;
                cout << "Withdrawal Amount: " << wMoney << endl;
                if (wMoney <= bal && wMoney > 0) {
                    bal -= wMoney;
                    cout << "Successfully Withdrawn !! \n\n";
                } else if (wMoney > bal) {
                    cout << "Not Sufficient Balance !!\n\n";
                } else {
                    cout << "Invalid Withdrawal Amount!! It must be greater than 0.\n\n";
                }
                break;

            default:
                cout << "Wrong Choice !! \n\n";
        }

        // Increment the iterations counter
        iterations++;

    } while (ch != 4);

}

int main() {
    atm();
    return 0;
}

