#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin >> T;
	while (T--) {
		char c;
		cin >> c;
		if (65 <= c && c <= 90) cout << "Uppercase Character\n";
		else if (97 <= c && c <= 122) cout << "Lowercase Character\n";
		else if (48 <= c && c <= 57) cout << "Numerical Digit\n";
		else cout << "Special Characters\n";
	}
	return 0;
}
