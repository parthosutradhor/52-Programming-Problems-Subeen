#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T, N;
	cin >> T;
	for (int k = 1; k <= T; k++) {
		cin >> N;
		cout << "Case " << k << ": 1";
		for (int i = 2; i <= N; i++) {
			if (N % i == 0) cout << " " << i;
		}
		cout << endl;
	}
	return 0;
}
