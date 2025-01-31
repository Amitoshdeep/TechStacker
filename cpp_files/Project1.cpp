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
    cout << "Anuj Babbar, 2410997052" << endl;
    cout << "Ansh Sudan, 2410997047" << endl;
    cout << "Arshdeep Kaur, 2410997058" << endl;

    setW();
    setFill();
    setPrecision();
    setBase();

    return 0;
}

