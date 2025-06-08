#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drinks=k*l;
    int total_slices=c*d;

    int toast_from_drink = total_drinks / nl;
    int toast_from_limes = total_slices;
    int toast_from_salt = p / np;

    int total_toasts = min({toast_from_drink, toast_from_limes, toast_from_salt});
    cout<<total_toasts/n;
}
