#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, n, w;
    cin >> k >> n >> w;

    int total_cost =k * w * (w + 1) / 2;
    int borrowed = total_cost - n;

    if (borrowed > 0)
        cout <<borrowed;
    else
        cout<<0;
}