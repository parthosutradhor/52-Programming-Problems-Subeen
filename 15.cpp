#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        map<char, int> mp;
        for (auto elem:s) {
            if (elem >= 'a' && elem <= 'z') mp[elem]++;
        }
        for (auto elem:mp) {
            if (elem.second) cout << elem.first << " = " << elem.second << endl;
        }
        if (t) cout << endl;
    }
}