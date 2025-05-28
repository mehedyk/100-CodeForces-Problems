#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,width=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        width++;
        if(temp>h) width++; 
    }
    cout<<width;
}
