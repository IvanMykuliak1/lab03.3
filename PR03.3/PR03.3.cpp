// Lab_03_3.cpp
// < Микуляк Іван Романович >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 18

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x, y, R1, R2;

    cout << "Enter x: "; cin >> x;

    cout << "Enter R1: "; cin >> R1;

    cout << "Enter R2: "; cin >> R2;

    if (x <= -2 * R1)
        y = x + 2 * R1;

    else if (x > -2 * R1 && x <= 0)
        y = sqrt(R1 * R1 - (x + R1) * (x + R1));

    else if (x > 0 && x <= 2 * R2)
        y = -sqrt(R2 * R2 - (x - R2) * (x - R2));

    else if (x > 2 * R2 && x <= 6) {

        double k = R2 / (6 - 2 * R2);

        y = k * (x - 2 * R2) - R2;
    }
    else //gjg
        y = -1;

    cout << "y = " << y << endl;

    return 0;
                      
}