#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i;
    cin>>n>>m;
    pair<int, int>a[n];
    for(i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a, a+n);
    for(i=0; i<n; i++){
        m-=a[i].first;
        if(m<0){
            break;
        }
    }
    cout<<i<<endl;
    while(i--){
        cout<<a[i].second<<" ";
    }
}