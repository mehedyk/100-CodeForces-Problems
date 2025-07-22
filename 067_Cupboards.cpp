#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int left_open=0,right_open=0;

    for(int i =0;i<n;i++){
        int l,r;
        cin>>l>>r;

        left_open +=l;
        right_open +=r;
    }

    int left= min(left_open, n-left_open);
    int right=min(right_open, n-right_open);

    cout << left+right;
}
