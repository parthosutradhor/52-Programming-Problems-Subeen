#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        if (n > 1) {
            for (; n > 1; n--) printf("2^%d + ", n);
        }
        if (n == 1) {
            cout << "2 + ";
            n--;
        }
        if (n == 0) cout << 1 << endl;
    }
    return 0;
}
