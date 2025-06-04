#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double sum=0;
    cin>>n;
    int dividend=n;
    while(n--){
        double m;
        cin>>m;
        sum+=m;
    }
    cout<<fixed<<setprecision(12)<<sum/dividend;
}
