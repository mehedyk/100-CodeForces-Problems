#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    vector<int>homeColors(n);
    vector<int>awayColors(n);
    
    for(int i=0;i<n;++i){
        cin>>homeColors[i]>>awayColors[i];
    }
    
    int count=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&homeColors[i]==awayColors[j]){
                count++;
            }
        }
    }
    
    cout << count << endl;
}
