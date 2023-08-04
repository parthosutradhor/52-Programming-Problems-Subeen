#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	float r1, r2, b, cr, rr;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> r1 >> r2 >> b;
		if (r2 > r1) rr = 0.00;
		else rr = (r1 - r2 + 1) / (b / 6);
		cr = r2 / (300 - b) * 6;
		printf("%.2f %.2f\n", cr, rr);
	}
	return 0;
}