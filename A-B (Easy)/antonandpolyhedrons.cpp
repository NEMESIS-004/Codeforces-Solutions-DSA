#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>polygons;
    polygons["Tetrahedron"] = 4;
    polygons["Cube"]=6;
    polygons["Octahedron"] = 8;
    polygons["Dodecahedron"] = 12;
    polygons["Icosahedron"] = 20;
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ans+=polygons[s];
    }
    cout<<ans;
    return 0;
}