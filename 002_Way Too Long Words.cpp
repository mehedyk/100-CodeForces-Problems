#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s.length()>10){
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else cout<<s<<endl;
    }
}
