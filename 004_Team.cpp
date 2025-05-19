#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sign=0,count=0;
    cin>>n;
    vector<int> op(3);

    while(n--){
        for(int i=0;i<3;i++){
            cin>>op[i];
            if(op[i]==1) sign++;
        }

        if(sign>=2) count++;
        sign=0;
    }
    cout<<count;
}
