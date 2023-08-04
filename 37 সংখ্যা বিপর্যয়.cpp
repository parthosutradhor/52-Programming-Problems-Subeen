#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int rev = 0;
        while (N != 0) {
            rev = rev * 10;
            rev = rev + N % 10;
            N = N / 10;
        }
        cout << rev << endl;
    }

    return 0;
}



/*



#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while (T--) {
        string N;
        cin >> N;
        int flag = 0;
        if (N.front() == '-') {
            flag = 1; // 1 means negative
            N.erase(N.begin());
        }
        while (N.size()>1 && N.back() == '0') N.pop_back();
        while (N.size() > 1 && N.front() == '0') N.erase(N.begin());
        reverse(N.begin(), N.end());
        if (flag && N!="0") cout << "-";
        cout << N << endl;
    }

    return 0;
}


*/
