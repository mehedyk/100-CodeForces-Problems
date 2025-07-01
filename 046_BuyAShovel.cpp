#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;

    for(int i=1;;i++){
        int total_price=k*i;
        if(total_price%10==0 || total_price%10==r){
            cout<<i;
            return 0;
        }
    }
}
