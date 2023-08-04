#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		vector<string> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for (auto elem : v) cout << elem << endl;
	}
	return 0;
}
