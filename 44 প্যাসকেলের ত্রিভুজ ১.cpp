#include <bits/stdc++.h>
using namespace std;
#define Long long long

Long comb(int, int);

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++) {
            cout << "1";
            for (int j = 1; j <= i; j++) {
                cout << " " << comb(i, j);
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

Long comb(int n, int r) {
    if (r == 0) return 1;
    if (r > n / 2) return comb(n, n - r);
    Long p = 1;
    for (int i = 0; i < r; i++) {
        p = p * (n - i);
    }
    for (int i = 0; i < r; i++) {
        p = p / (1 + i);
    }
    return p;
}
