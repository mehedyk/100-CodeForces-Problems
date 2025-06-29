#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int mishka_points=0,chris_points=0;

    for(int i=0;i<n;i++){
        int a, b;
        cin >> a >> b;

        if (a>b) mishka_points++;
        else if (a<b) chris_points++;
    }

    if(mishka_points>chris_points)
        cout<<"Mishka";
    else if(mishka_points<chris_points)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";

}
