#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, k, x, result;
    cin >> T;
    while (T--) {
        cin >> x >> k;
        if (x == 1) result = k + 1;
        else result = (pow(x, k + 1) - 1) / (x - 1);
        cout << "Result = " << result << endl;
    }
    return 0;
}