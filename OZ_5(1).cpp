
#include <iostream>
using namespace std;

int main() {
    double x, e, sum = 1.0;
    cout << "x and e = ";
    cin >> x >> e;

    double term = 1.0;
    int n = 1;

    while (term > e) {
        term = term * x / n; 
        sum += term;
        n++;
    }

    cout << "Result: " << sum << endl;
    return 0;
}