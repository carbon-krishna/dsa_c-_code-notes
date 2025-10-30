#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

bool possibleSoln(double d, const vector<int>& a, int l) {
    int n = a.size();
    if (a[0] - d > 0) return false;
    for (int i = 1; i < n; ++i) {
        if ((a[i] - d) > (a[i - 1] + d)) return false;
    }
    if (a[n - 1] + d < l) return false;
    return true;
}

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    double start = 0, end = l;
    double ans = 0;
    
    while (end - start > 1e-9) {
        double mid = (start + end) / 2.0;
        if (possibleSoln(mid, a, l)) {
            ans = mid;
            end = mid; 
        } else {
            start = mid;  
        }
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}