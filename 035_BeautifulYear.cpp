#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;  

    while(1){
    year++;
    int checker=year;
    int y4=checker%10;
    checker/=10;
    
    int y3=checker%10;
    checker/=10;

    int y2=checker%10;
    checker/=10;

    int y1=checker%10;
    
        if(y4==y1||y4==y2||y4==y3||y3==y1||y3==y2||y2==y1||y2==y3) continue;
        else if(y4!=y1 && y4!=y2 && y4!=y3 &&y3!=y1 && y3!=y2 && y2!=y1 && y2!=y3){
            cout<<y1<<y2<<y3<<y4;
            return 0;
        }
    }
}
