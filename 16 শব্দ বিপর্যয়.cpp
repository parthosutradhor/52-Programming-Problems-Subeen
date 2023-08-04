#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string s, tmp;
        getline(cin, s);
        for (auto ch:s) {
            if (ch != ' ') tmp.push_back(ch);
            else {
                reverse(tmp.begin(), tmp.end());
                cout << tmp<<" ";
                tmp = "";
            }
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp <<endl;
    }
}
