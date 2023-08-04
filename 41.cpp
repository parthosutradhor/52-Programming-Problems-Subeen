#include <bits/stdc++.h>
using namespace std;
#define Long long long int

Long fact(int);

int main()
{
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        double sum = 0;
        for (int i = 1; i <= n; i++) sum = sum + i * 1.0 / fact(i);
        printf("%0.4lf\n", sum);
    }
    return 0;
}

Long fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}