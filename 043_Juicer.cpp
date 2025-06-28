#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,b,d;
    cin >>n>>b>>d;

    int clean_count=0;
    int current_waste=0;

    for (int i=0;i<n;i++){
        int orange;
        cin>>orange;

        if(orange<=b){
            current_waste+=orange;
            if(current_waste>d){
                clean_count++;
                current_waste=0;
            }
        }
    }

    cout<<clean_count;
}