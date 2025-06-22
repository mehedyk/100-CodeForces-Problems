#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;

    long long current=1;
    long long total_time=0;

    for(int i= 0;i<m;i++){
        long long task;
        cin>>task;

        if(task>=current){
            total_time+=task-current;
        }
        else{
            total_time+=(n-current)+task;
        }

        current=task;
    }
    cout<<total_time;
}
