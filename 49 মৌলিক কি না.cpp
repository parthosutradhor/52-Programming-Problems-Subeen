#include <bits/stdc++.h>
using namespace std;
#define Long unsigned long long int

bool is_prime(Long);

int main()
{
    Long T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        if (is_prime(n)) cout << n << " is a prime\n";
        else cout << n << " is not a prime\n";
    }
    return 0;
}

bool is_prime(Long num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    Long sqrtNum = sqrt(num);
    for (Long i = 5; i <= sqrtNum; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
