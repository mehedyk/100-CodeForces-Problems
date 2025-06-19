#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int receiver[n],sender[n];
    for(int i=0;i<n;i++){
        cin>>receiver[i];
        sender[receiver[i]-1]=i+1;
    }
    for(int j=0;j<n;j++){
        cout<<sender[j]<<" ";
    }
}
