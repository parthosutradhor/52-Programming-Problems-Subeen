#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		if (n == 1) cout << "YES\n";
		
		else if (v[0] < v[1]) {
			int flag = 1;
			for (int i = 1; i < n; i++) {
				if (v[i - 1] > v[i]) {
					flag = 0;
					break;
				}
			}
			if (flag) cout << "YES\n";
			else cout << "NO\n";
		}
		
		else {
			int flag = 1;
			for (int i = 1; i < n; i++) {
				if (v[i - 1] < v[i]) {
					flag = 0;
					break;
				}
			}
			if (flag) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}