#include <iostream>
#include <iomanip> // for setprecision

using namespace std;

int main() {
    int x;
    cout << "Enter the number whose sqrt is to be found: ";
    cin >> x;
    cout << endl;

    int s = 1, e = x;
    double ans = 0;

    // Step 1: Binary Search for Integer Part
    while (s <= e) {
        long long m = s + (e - s) / 2;
        long long sq = m * m;
        if (sq == x) {
            ans = m;
            break;
        } else if (sq < x) {
            ans = m;
            s = m + 1;
        } else {
            e = m - 1;
        }
    }

    int precision;
    cout << "Enter the decimal precision you need: ";
    cin >> precision;
    cout << endl;

    // Step 2: Refining the Answer to Required Decimal Places
    double factor = 1.0;
    for (int i = 0; i < precision; i++) {
        factor /= 10.0;
        for (int j = 0; j < 10; j++) {
            double temp = ans + factor;
            if (temp * temp <= x) {
                ans = temp;
            } else {
                break;
            }
        }
    }

    // Print the answer with required precision
    cout << fixed << setprecision(precision);
    cout << "Approximate square root of " << x << " is: " << ans << endl;

    return 0;
}
