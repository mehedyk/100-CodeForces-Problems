#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    string target="hello";
    int pos=0;

    for(char c:s){
        if(c==target[pos]){
            pos++;
            if(pos ==target.size()){
                break;
            }
        }
    }

    if(pos == target.size())
        cout<< "YES";
    else
        cout<< "NO";
}