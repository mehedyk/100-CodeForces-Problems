#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int sumX = 0, sumY = 0, sumZ = 0;

    for(int i = 0; i < n; ++i){
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if(sumX == 0 && sumY == 0 && sumZ == 0){
        bool ok = true;
        cout << (ok ? "YES" : "NO");
    } else {
        bool ok = false;
        cout << (ok ? "YES" : "NO");
    }
}