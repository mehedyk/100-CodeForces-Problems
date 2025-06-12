#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;

    int next_prime = 0;
    for (int i = n + 1; ; ++i) {
        bool prime = true;
        if (i < 2) prime = false;
        for (int d = 2; d * d <= i; ++d) {
            if (i % d == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            next_prime = i;
            break;
        }
    }

    if (next_prime == m) cout << "YES";
    else cout << "NO";
}l