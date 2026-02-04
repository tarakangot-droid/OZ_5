#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double x, epsilon;
    cout << "Enter x (|x| < 1) and epsilon: ";
    cin >> x >> epsilon;

    if (fabs(x) >= 1) {
        cout << "Error: |x| must be < 1 for convergence" << endl;
        return 1;
    }

    double term = x;      
    double sum = term;     
    int n = 2;             

    while (fabs(term) > epsilon) {
        term = term * (-x) * (n - 1) / n; 
        sum += term;
        n++;
    }

    cout << "ln(1+" << x << ") ≈ " << sum << endl;
    cout << "std::log(1+" << x << ") = " << log(1 + x) << endl;

    return 0;
}