#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count = 0;
    for (char c : s) {
        if (c == '4' || c == '7')
            count++;
    }
    cout << ((count == 4 || count == 7) ? "YES":"NO");
}