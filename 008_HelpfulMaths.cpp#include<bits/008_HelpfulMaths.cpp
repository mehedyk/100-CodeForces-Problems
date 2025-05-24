#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    multiset<char> digit;

    for(char c:s){
        if(c!='+') digit.insert(c);
    }

    int sign=0;

    for(char d:digit){
        if(sign!=0) cout<<"+";
        cout<<d;
        sign=1;
    }
}
