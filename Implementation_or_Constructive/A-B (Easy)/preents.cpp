#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int> gifts;
    vector<int> friends;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        gifts[c]=i+1;
        friends.push_back(c);
    }
    for(int i=1;i<=n;i++){
        cout<<gifts[i]<<" ";
    }
    return 0;
}