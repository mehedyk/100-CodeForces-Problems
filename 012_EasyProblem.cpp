#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sign=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        if(m==1){
            cout<<"HARD";
            sign=1;
            break;
        }
    }
    if(sign==0) cout<<"EASY";
}
