#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,l,c,d,p,nl,np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int total_drink=k*l,total_slices=c*d;
   
   int toast = min(min(total_drink / (n * nl), total_slices / n), p / (n*np));
   cout<<toast;
}
