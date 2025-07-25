#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int max_val = max({a, b, c});
        int required = (max_val - a) + (max_val - b) + (max_val - c);

        if(n < required){
            cout << "NO\n";
        }else if ((n - required) % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}