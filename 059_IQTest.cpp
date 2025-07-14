#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;

    vector<int> a(n);
    for(int &x : a) cin >> x;

    int even_count = 0,odd_count = 0;
    for(int i=0; i<3;i++){
        if(a[i]%2== 0) even_count++;
        else odd_count++;
    }

    bool majority_even= (even_count> odd_count);

    for(int i = 0; i < n; i++){
        if((a[i] % 2 == 0)!= majority_even){
            cout<< i+1;
        }
    }
}