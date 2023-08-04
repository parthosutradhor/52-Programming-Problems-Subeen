#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T, sum;
	string s;
	cin >> T;
	while (T--) {
		cin >> s;
		sum = s.front() + s.back() - 96;
		cout << "Sum = " << sum << endl;
	}
	return 0;
}