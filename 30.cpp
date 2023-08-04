#include<bits/stdc++.h>
using namespace std;
#define Long unsigned long long

bool isPrime(Long);

int main()
{
    vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };
    vector<Long> perfects;
    for (auto prime : primes) {
        Long M = pow(2.0, (double)prime) - 1;
        if (isPrime(M)) {
            perfects.push_back(((Long)pow(2.0, prime - 1)) * M);
        }
    }
    int T;
    cin >> T;
    while (T--) {
        string N;
        cin >> N;
        int c = 0;
        for (auto perfect : perfects) {
            if (to_string(perfect) == N) {
                c = 1;
                break;
            }
        }
        if (c) cout << "YES, " << N << " is a perfect number!\n";
        else cout << "NO, " << N << " is not a perfect number!\n";
    }
    return 0;
}


bool isPrime(Long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (Long i = 3; i * i <= n; i = i + 2) {
        if (n % i == 0) return false;
    }
    return true;
}
