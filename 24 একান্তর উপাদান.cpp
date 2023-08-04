#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        cout << v[0];
        for (int i = 2; i < n; i = i + 2)cout << " " << v[i];
        cout << endl;
    }
}
