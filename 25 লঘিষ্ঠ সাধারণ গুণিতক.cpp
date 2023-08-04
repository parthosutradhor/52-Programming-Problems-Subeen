#include<bits/stdc++.h>
using namespace std;
#define Long long long int

int gcd(int, int);

int main()
{
	int T;
	cin >> T;
	while (T--) {
		Long a, b;
		cin >> a >> b;
		cout << "LCM = " << a * b / gcd(a, b) << endl;
	}
	return 0;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
