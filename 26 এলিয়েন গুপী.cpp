#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		int c=0;
		double x;
		cin >> x;
		while (x > 1) {
			c++;
			x = x / 2;
		}
		cout << c << " days\n";
	}
	return 0;
}
