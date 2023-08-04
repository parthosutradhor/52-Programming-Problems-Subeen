#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	vector<int> perfects = { 6, 28, 496, 8128, 33550336 };
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (auto perfect: perfects) {
			if (perfect <= n) cout << perfect << endl;
			else break;
		}
		cout << endl;
	}
	return 0;
}
