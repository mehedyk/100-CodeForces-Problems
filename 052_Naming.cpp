#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string>S(n),T(m);

    for(int i=0;i<n; i++) cin >> S[i];
    for(int i=0;i<m; i++) cin >> T[i];

    int q;
    cin >> q;
    while(q--){
        int y;
        cin >> y;
        cout<<S[(y-1)%n] << T[(y-1)%m] <<endl;
    }
}