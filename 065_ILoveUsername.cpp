#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int score,amazing=0;
    cin>>score;

    int max_score =score;
    int min_score =score;

    for(int i=1;i<n;i++){
        cin>>score;

        if(score>max_score){
            amazing++;
            max_score=score;
        }
        else if(score<min_score){
            amazing++;
            min_score=score;
        }
    }
    cout<<amazing;
}
