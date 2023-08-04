#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	char ch;
	cin >> T;
	cin.ignore();
	for (int i = 1; i <= T; i++) {
		string s;
		int counter = 0;
		getline(cin, s);
		for (auto c : s) {
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
				counter++;
			}
		}
		printf("Number of vowels = %d\n", counter);
	}
	return 0;
}
