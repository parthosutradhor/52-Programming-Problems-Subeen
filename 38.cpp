#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, x;
    cin >> T;
    while (T--) {
        cin >> n >> x;
        for (int i = 1; i <= n; i++) {
            cout << x;
            for (int j = 1; j < i; j++) cout << " " << x;
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--) {
            cout << x;
            for (int j = i - 1; j >= 1; j--) cout << " " << x;
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}