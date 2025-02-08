#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Player {
    string name;
    float runs, wickets, strikeRate;
};

// Enum to store predefined player names
enum PlayerNames { JOHN, MIKE, DAVID, ADAM, CHRIS, ROBERT, ALEX, STEVE, KEVIN, MARK };
const string names[] = { "John", "Mike", "David", "Adam", "Chris", "Robert", "Alex", "Steve", "Kevin", "Mark" };

void playerz() {
    Player players[3];
    srand(time(0)); // Seed for randomness

    for (int i = 0; i < 3; i++) {
        players[i].name = names[rand() % 10];   // Random name from the list
        players[i].runs = rand() % 151 + 50;    // Runs between 50-200
        players[i].wickets = rand() % 6;        // Wickets between 0-5
        players[i].strikeRate = rand() % 101 + 50; // Strike rate between 50-150

        cout << "Enter Name, Runs, Wickets Taken, and Strike Rate of Player "<<i+1 << ": " << players[i].name << "\n" <<players[i].runs << "\n" << players[i].wickets << "\n" << players[i].strikeRate <<"\n\n";
    
	}

    // Find the player with the highest strike rate
    Player highest = players[0];
    for (int i = 1; i < 3; i++) {
        if (players[i].strikeRate > highest.strikeRate) {
            highest = players[i];
        }
    }

    cout << "\nHighest Strike Rate:\n";
    cout << "Name: " << highest.name << "\nRuns: " << highest.runs 
         << "\nWickets Taken: " << highest.wickets 
         << "\nStrike Rate: " << highest.strikeRate << " %\n";
}

int main() {
    cout << "Amitoshdeep 7038\n\n";
    playerz();
    return 0;
}

