#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        if (s.back() % 2) cout << "odd\n";
        else cout << "even\n";
    }
    return 0;
}
