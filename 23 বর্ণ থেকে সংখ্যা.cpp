#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T, val;
	string s;
	cin >> T;
	while (T--) {
		cin >> s;
		for (auto c : s) {
			val = c - 64;
			cout << val;
		}
		cout << endl;
	}
	return 0;
}
