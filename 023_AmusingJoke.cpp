#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string host=a+b;
    
    sort(host.begin(),host.end());
    sort(c.begin(),c.end());

    if(host==c) cout<<"YES";
    else cout<<"NO";
}
