#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        int x = n, s = 0, r;
        while (x != 0) {
            r = x % 10;
            s = s + r * r * r;
            x = x / 10;
        }
        if (s == n) printf("%d is an armstrong number!\n", n);
        else printf("%d is not an armstrong number!\n", n);
    }
    return 0;
}