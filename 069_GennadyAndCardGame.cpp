#include <bits/stdc++.h>
using namespace std;
int main(){
    string table;
    cin>>table;

    int canPlay =0;
    for(int i=0;i<5;i++){
        string card;
        cin>>card;

        if(card[0] == table[0] || card[1] == table[1]){
            canPlay=1;
        }
    }
  if(canPlay) cout<<"YES";
  else cout<<"NO";
}
