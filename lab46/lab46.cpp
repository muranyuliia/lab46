#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S1 = 0, S2 = 0;
    int n = 1, k, i = 1;


    while (n <= 20) {
        k = 1;
        while (k <= 10) {
            double term = sqrt(sin(1. * k) * sin(1. * k) + abs(S1 * cos(i + k)));
            S1 += term;
            S2 += term;
            k++;
        }
        n++;
    }

    cout << " " << S1 << endl;


    S1 = 0;
    S2 = 0;
    n = 1;
    k = 1;
    i = 1;


    do {
        k = 1;
        do {
            double term = sqrt(sin(1. * k) * sin(1. * k) + abs(S1 * cos(i + k)));
            S1 += term;
            S2 += term;
            k++;
        } while (k <= 10);
        n++;
    } while (n <= 20);

    cout << " " << S1 << endl;


    S1 = 0;
    S2 = 0;
    n = 1;
    k = 1;
    i = 1;


    for (n = 1; n <= 20; n++) {
        for (k = 1; k <= 10; k++) {
            double term = sqrt(sin(1. * k) * sin(1. * k) + abs(S1 * cos(i + k)));
            S1 += term;
            S2 += term;
        }
    }

    cout << " " << S1 << endl;

    S1 = 0;
    S2 = 0;
    n = 1;
    k = 1;
    i = 1;


    for (n = 20; n >= 1; n--) {
        for (k = 10; k >= 1; k--) {
            double term = sqrt(sin(1. * k) * sin(1. * k) + abs(S1 * cos(i + k)));
            S1 += term;
            S2 += term;
        }
    }

    cout << " " << S1 << endl;

    return 0;
}

