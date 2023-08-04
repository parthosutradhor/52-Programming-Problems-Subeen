#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 1000;
    while (i > 0) {
        for (int j = 0; j < 5; j++) cout << i - j << "\t";
        i = i - 5;
        cout << endl;
    }
}