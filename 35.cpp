#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	double xc, yc, r, x, y, d;
	cin >> T;
	while (T--) {
		cin >> xc >> yc;
		cin >> r;
		cin >> x >> y;

		d = sqrt((x-xc)*(x-xc)+ (y - yc) * (y - yc));

		if (d < r)cout << "The point is inside the circle\n";
		else cout << "The point is not inside the circle\n";
	}
	return 0;
}