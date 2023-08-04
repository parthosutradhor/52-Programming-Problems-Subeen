#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin.ignore();
		getline(cin, s);
		char c;
		cin >> c;
		int counter = 0;
		for (auto ch : s) {
			if (ch == c) counter++;
		}
		if (counter) cout << "Occurrence of '" << c << "' in '" << s << "' = " << counter << endl;
		else printf("'%c' is not present\n", c);
	}
	return 0;
}
