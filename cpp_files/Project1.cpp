#include<iostream>
#include<iomanip>
using namespace std;

void setW() {
    int a = 543;
    cout << setw(10) << a << endl;
}

void setFill() {
    int a = 543;
    cout << setfill('$') << setw(10) << a << endl;
}

void setPrecision() {
    float a = 543.5647;
    cout << fixed << setfill('*') << setw(10) << setprecision(2) << a << endl;
}

void setBase() {
    int a = 543;
    cout << setbase(16) << setfill('*') << setw(10) << a << endl;
}

int main() {
    string name;
    int roll;
    
    cin >> name >> roll;  // Taking input from stdin
    
    cout << name << " " << roll << endl;  // Printing the input
    setW();
    setFill();
    setPrecision();
    setBase();

    return 0;
}

