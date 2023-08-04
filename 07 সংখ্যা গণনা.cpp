#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		string s;
		getline(cin, s);
		int n = s.length();
		s.push_back(' ');
		int counter = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] != ' ' && s[i + 1] == ' ') counter++;
		}
		cout << counter << endl;
	}
	return 0;
}
