#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int current = 0, max_capacity = 0;

    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        current -= a;
        current += b;
        if(current > max_capacity) max_capacity = current;
    }
    cout << max_capacity;
}