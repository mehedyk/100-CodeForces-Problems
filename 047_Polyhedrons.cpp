#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int total_faces = 0;
    while(n--){
        string poly;
        cin>>poly;

        if (poly == "Tetrahedron") total_faces += 4;
        else if (poly == "Cube") total_faces += 6;
        else if (poly == "Octahedron") total_faces += 8;
        else if (poly == "Dodecahedron") total_faces += 12;
        else if (poly == "Icosahedron") total_faces += 20;
    }
  cout<<total_faces;
}
