#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int &x : a) cin >> x;
    sort(a.begin(), a.end());

    int option1 = a[n-1] - a[1];
    int option2 = a[n-2] - a[0];

    cout<<min(option1, option2);
}