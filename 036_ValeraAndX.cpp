#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sign=0;
    cin>>n;
    vector<string> mat(n);

    for(int i=0;i<n;i++){
        cin>>mat[i];
    }

    char d = mat[0][0];
    char o = mat[0][1];

    if (d == o) {
        cout << "NO";
        return 0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||i+j==n-1){
                if(mat[i][j]!=d){
                    cout<<"NO";
                    return 0;
                }
            }
            else{
                if(mat[i][j]!=o){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
cout<<"YES";
}
