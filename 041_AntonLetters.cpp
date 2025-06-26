#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    set<char>unique_letters;

    for(char c:s){
        if(c>='a'&&c<='z'){
            unique_letters.insert(c);
        }
    }
    cout << unique_letters.size();
}
