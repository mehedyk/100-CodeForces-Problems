#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i)
        cin >> h[i];

    int max_pos = 0, min_pos = 0;
    for (int i = 0; i < n; ++i) {
        if (h[i] > h[max_pos]) max_pos = i;
        if (h[i] <= h[min_pos]) min_pos = i;
    }

    int moves = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos) moves--;
    cout << moves;
}