#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		int N, c = 0;
		cin >> N;
		c += N / 5;
		c += N / 25;
		cout << c << endl;
	}
	return 0;
}
