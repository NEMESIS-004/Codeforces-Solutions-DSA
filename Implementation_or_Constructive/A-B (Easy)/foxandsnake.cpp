#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> ans(n,vector<char>(m,'#'));
    bool tail=1;
    for(int i=1;i<n;i+=2){
        for(int j=0;j<m;j++){
            ans[i][j]='.';
        }
        if(tail) ans[i][m-1] = '#';
        else ans[i][0] = '#';
        tail = !tail;
    }
    for(auto i:ans){
        for(auto j:i) cout<<j;
        cout<<endl;
    }
    return 0;

}