#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n%2!=0){
        cout<< 0;
    }else{
        int half=n/2;
        if (half%2== 0){
            cout<<half/2 - 1;
        }else
            cout<<half/2;
        
    }
}
