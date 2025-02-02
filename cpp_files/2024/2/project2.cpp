#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

enum Grade { A = 90, B = 75, C = 50, F = 0 };

Grade calculateGrade(float avg) {
    if (avg >= A)
        return A;
    else if (avg >= B)
        return B;
    else if (avg >= C)
        return C;
    else
        return F;
}

int main() {
    srand(time(0)); // Initialize random seed

    int n = 5;
    float s[n], sum = 0;
    Grade grade;
    float avg;

    // Randomly generate marks for subjects
    for (int i = 0; i < n; i++) {
        s[i] = rand() % 101;  // Random marks between 0 and 100
        cout << "Enter Marks for Subject " << i + 1 << ": " << s[i] << endl;
        sum += s[i];
    }

    avg = sum / n;
    grade = calculateGrade(avg);

    // Convert grade to letter representation
    char gradeChar;
    switch (grade) {
        case A: gradeChar = 'A'; break;
        case B: gradeChar = 'B'; break;
        case C: gradeChar = 'C'; break;
        case F: gradeChar = 'F'; break;
        default: gradeChar = 'F'; break;  // Fallback case
    }

    cout << "Your Grade is: " << gradeChar << endl;
    cout << "Your Average Marks: " << avg << endl;

    return 0;
}

