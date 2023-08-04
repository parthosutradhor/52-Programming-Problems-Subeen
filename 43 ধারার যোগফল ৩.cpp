#include <bits/stdc++.h>
using namespace std;
#define Long unsigned long long int

int expo_calc(int a, int p, int m);

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int p, q, c;
        cin >> p >> q >> c;
        int s = expo_calc(p, q, c);
        printf("Result = %d\n", s);
    }
    return 0;
}

int expo_calc(int a, int p, int m) {
    if (p == 0) return 1;
    if (p == 1) return a;
    if (p % 2 == 0) return expo_calc((a * a) % m, p / 2, m);
    else return (a * expo_calc((a * a) % m, p / 2, m)) % m;
}




/*


#include <bits/stdc++.h>
using namespace std;
#define Long unsigned long long int

int expo_calc(int a, int p, int m);

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int p, q, c;
        cin >> p >> q >> c;
        int s = 1;
        for (int i = 0; i < q; i++) {
            s = (s * p) % c;
        }
        printf("Result = %d\n", s); 
    }
    return 0;
}

int expo_calc(int a, int p, int m){
	if(p==0) return 1;
	if(p==1) return a;
	if(p%2==0) expo_calc((a*a)%m, p/2, m);
	else (a*expo_calc((a*a)%m, p/2, m))%m;
}

*/
