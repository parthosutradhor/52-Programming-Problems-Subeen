#include<bits/stdc++.h>
#define Long unsigned long long int
using namespace std;

Long gcd(Long, Long);
Long lcm(Long, Long);

int main()
{
	int T;
	cin >> T;
	while (T--) {
		Long a, b, c, i;
		cin >> a >> b >> c;
		Long L = lcm(a, b);
		for (i = L; i <= c; i = i + L) {
			cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}

Long gcd(Long a, Long b) {
	if (a == 0) return b;
	if (b == 0) return a;
	if (a < b) swap(a, b);
	return gcd(b, a % b);
}

Long lcm(Long a, Long b) {
	return a * b / gcd(a, b);
}