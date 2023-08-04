#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T, a, b;
	cin >> T;
	while (T--) {
		cin >> a >> b;
		if (a > b) {
			cout << "Invalid!" << endl;
		}
		else {
			for (int i = a; i <= b; i = i + a) {
				cout << i << endl;
			}
		}
		cout << endl;
	}
	return 0;
}
