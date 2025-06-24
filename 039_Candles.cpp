#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >>a>>b;

    int total =a;
    int burnt =a;

    while(burnt>=b){
        int new_candles =burnt/b;
        total+=new_candles;
        burnt=new_candles+(burnt % b);
    }
    cout<<total;
}