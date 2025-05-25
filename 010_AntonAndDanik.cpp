#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,scoreA=0,scoreD=0;
    string games;
    cin>>n;
    cin>>games;

    for(int i=0;i<n;i++){
        if(games[i]=='A') scoreA++;
        else if(games[i]=='D') scoreD++;
    }

    if(scoreA>scoreD) cout<<"Anton";
    else if(scoreA<scoreD) cout<<"Danik";
    else if(scoreA==scoreD) cout<<"Friendship";
}
