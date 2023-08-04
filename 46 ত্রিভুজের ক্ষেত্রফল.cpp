#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        double a, b, c, s, area;
        cin >> a >> b >> c;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area = %0.3lf\n", area);
    }
    return 0;
}

