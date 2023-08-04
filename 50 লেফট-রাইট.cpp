#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string s;
    cin >> T;
    while (T--) {
        cin >> s;
        for (int i = 1; i < s.length() - 1; i++) {
            if (s[i] == 'L') s[i] = s[i - 1];
            if (s[i] == 'R') s[i] = s[i + 1];
        }
        cout << s << endl;
    }
    return 0;
}
