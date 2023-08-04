#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000; // Adjust as needed

bitset<MAX> isComposite;

void sieve() {
    isComposite.reset();
    isComposite[0] = isComposite[1] = 1;
    for (int i = 2; i * i < MAX; ++i) {
        if (!isComposite[i]) {
            for (int j = i * i; j < MAX; j += i) isComposite[j] = 1;
        }
    }
}


int main() {

    sieve();

    int T, a, b;
    cin >> T;
    while (T--) {
        cin >> a >> b;
        int counter = 0;
        for (int i = a; i <= b; i++) {
            if (!isComposite[i]) counter++;
        }
        cout << counter << endl;
    }
    return 0;
}
