#include<bits/stdc++.h>
using namespace std;
int main(){
    int sign=0;
    string s,t;
    cin>>s>>t;
    int n=max(s.length(),t.length());
    //if(s.length()!=t.length()) cout<<"NO";
    for(int i=0,j=n-1;i<n;i++,j--){
        if(s[i]!=t[j]) sign=1;
    }
    if(sign) cout<<"NO";
    else cout<<"YES";
}
