#include  <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int diff_sum = 0;
        for (int i = 0; i < n; i++) {
            diff_sum += abs(a[i] - b[i]);
        }

        cout << diff_sum / 2 << "\n";
    }
    return 0;
}