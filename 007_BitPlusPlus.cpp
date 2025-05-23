#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res=0;
    cin>>n;
    while(n--){
        string cases;
        cin>>cases;
        if(cases=="++X" || cases=="X++") res++;
        else if(cases=="X--" || cases=="--X") res--;
    }
    cout<<res;
}
