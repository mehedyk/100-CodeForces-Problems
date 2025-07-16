#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0,x;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }

    int count=0;
    for(int fingers=1;fingers<= 5;fingers++){
        if((sum+fingers)%(n+1)!= 1){
            count++;
        }
    }
    cout<<count;
}
