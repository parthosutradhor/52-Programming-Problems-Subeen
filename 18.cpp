#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	char ch;
	cin >> T;
	ch = getchar();
	for (int i = 1; i <= T; i++) {
		string s, tmp;
		int counter = 0;
		vector<char> vowel, consonant;
		getline(cin, s);

		for (auto c : s) {
			if (c != ' ') {
				if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowel.push_back(c);
				else consonant.push_back(c);
			}
		}
		for (auto c : vowel) cout << c;
		cout << endl;
		for (auto c : consonant) cout << c;
		cout << endl;

	}
	return 0;
}