#include<bits/stdc++.h>
using namespace std;
#define Long long long int

Long fact(int);

int main()
{
	int T, n;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> n;
		cout << fact(n) << endl;
	}
	return 0;
}

Long fact(int n) {
	if (n == 0) return 1;
	return n * fact(n - 1);
}
