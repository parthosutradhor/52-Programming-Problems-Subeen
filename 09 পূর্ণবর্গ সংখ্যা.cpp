#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned int T, x, y;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> x;
		y = (unsigned int)sqrt(x * 1.0);
		if (y * y == x) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
