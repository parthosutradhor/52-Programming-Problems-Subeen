#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while (T--) {

        int n1, n2;
        cin >> n1;
        vector<int> a(n1), b(n2);
        for (int i = 0; i < n1; i++) cin >> a[i];
        cin >> n2;
        for (int i = 0; i < n2; i++) cin >> b[i];
        
        int i = 0, j = 0;

        if (a[i] < b[j]) {
            cout << a[i];
            i++;
            n1--;
        }
        else {
            cout << b[j];
            j++;
            n2--;
        }

        while (n1 > 0 && n2 > 0) {
            if (a[i] < b[j]) {
                cout << " " << a[i];
                i++;
                n1--;
            }
            else {
                cout << " " << b[j];
                j++;
                n2--;
            }
        }

        while (n1 > 0) {
            cout << " " << a[i];
            i++;
            n1--;
        }

        while (n2 > 0) {
            cout << " " << b[j];
            j++;
            n2--;
        }

        cout << endl;
    }

    return 0;
}
