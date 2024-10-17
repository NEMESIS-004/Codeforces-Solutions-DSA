#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> dirr(n);
        for(int i=0;i<n;i++){
            cin>>dirr[i];
        }
       
        int changes=0;
        
        for(int j=0;j<m-1;j++){
            if(dirr[n-1][j]!='R') changes++;
        }
        for(int j=0;j<n-1;j++){
            if(dirr[j][m-1]!='D') changes++;
        }
        
        cout<<changes<<endl;

    }
    return 0;
}