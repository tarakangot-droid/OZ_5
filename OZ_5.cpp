#include <iostream>
#include<cmath>
using namespace std;

int main() {
    double x, e, sum = 1.0;
    cout << "x and e = ";
    cin >> x >> e;

    double term = 1.0;
    int n = 1;
    double x2 = x * x;

    while (abs(term) > e) {
        term = term *(-x2) / (2 * n - 1) / (2 * n);
        sum += term;
        n++;
    }

    cout << "Result: " << sum << endl;
    return 0;
}