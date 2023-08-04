#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int N, i;
        cin >> N;
		N--;
        vector<int> v(N);
        for (int i = 0; i < N; i++) cin >> v[i];
        sort(v.begin(), v.end());
        for (i = 0; i < N; i++) {
            if (v[i] != (i+1)) {
                cout << (i + 1) << endl;
                break;
            }
        }
        if(i==N) cout << (N + 1) << endl;
    }
    return 0;
}

