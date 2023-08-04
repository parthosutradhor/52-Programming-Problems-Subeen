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
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}