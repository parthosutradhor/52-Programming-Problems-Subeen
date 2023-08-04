#include<bits/stdc++.h>
#define Long unsigned long long int
using namespace std;


int main()
{
	int T;
	cin >> T;
	while (T--) {
		Long a, b, c;
		cin >> a >> b >> c;
		if (a % c) a = a + c - (a % c);
		for (Long i = a; i <= b; i = i + c) {
			cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}