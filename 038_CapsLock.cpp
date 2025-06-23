#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int isAllCaps = 1;
    for(char c:s){
        if(islower(c)){
            isAllCaps=0;
            break;
        }
    }

    if(isAllCaps){
        for(char &c:s)c=tolower(c);
    }
    else{
        int restAllCaps=1;
        for(int i=1;i<s.size();i++){
            if(islower(s[i])){
                restAllCaps=0;
                break;
            }
        }

        if(restAllCaps && islower(s[0])){
            s[0]=toupper(s[0]);
            for(int i=1;i<s.size();i++){
                s[i]=tolower(s[i]);
            }
        }
    }
    cout << s;
}
