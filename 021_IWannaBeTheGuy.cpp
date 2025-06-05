#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n]={0};
    for(int i=0;i<x;i++){
        int p;
        cin>>p;
        if(p>0&&p<=n) arr[p-1]=1; 
    }
    int y;
    cin>>y;
    for(int i=0;i<y;i++){
        int q;
        cin>>q;
        if(q>0&&q<=n) arr[q-1]=1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
        cout<<"Oh, my keyboard!";
        return 0;
        }
    }
    cout<<"I become the guy.";
}
