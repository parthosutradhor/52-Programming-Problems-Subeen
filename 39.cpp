#include<bits/stdc++.h>
#define Long long long int
using namespace std;


int main()
{
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		int i = 0, j = s.length() - 1;
		while (i < j) {
			if (s[i] != s[j]) break;
			i++;
			j--;
		}
		if (i >= j) cout << "Yes! It is palindrome!\n";
		else cout << "Sorry! It is not palindrome!\n";
	}
	return 0;
}




/*
#include<bits/stdc++.h>
#define Long long long int
using namespace std;


int main()
{
	int T;
	cin >> T;
	while (T--) {
		string s, t;
		cin >> s;
		t = s;
		reverse(t.begin(), t.end());
		if (t == s) cout << "Yes! It is palindrome!\n";
		else cout << "Sorry! It is not palindrome!\n";
	}
	return 0;
}
*/