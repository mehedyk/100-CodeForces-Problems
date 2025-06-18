#include <bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    cin>>s;

    int upper_count = 0;
    int lower_count = 0;

    for(char c : s){
        if(isupper(c)){
            upper_count++;
        } else {
            lower_count++;
        }
    }

    if(upper_count > lower_count){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;
}
