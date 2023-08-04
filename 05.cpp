#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cout << "*";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
