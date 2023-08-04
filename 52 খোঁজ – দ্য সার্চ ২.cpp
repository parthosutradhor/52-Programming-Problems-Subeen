#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        string S, s;
        cin >> S;
        cin >> s;
        int c = 0;
        for(int i=0; i < S.length(); i++) {
            if (S[i] == s[0]) {
				int j;
                for(j = 0 ; j < s.length() && (i+j) < S.length(); j++) {
                    if (S[i + j] != s[j]) break;
                }
                if (j == s.length()) c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}

