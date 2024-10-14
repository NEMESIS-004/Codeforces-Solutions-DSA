#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int pass=0;
    int cap=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pass-=a;
        pass+=b;
        cap = max(cap,pass);
    }
    cout<<cap;
    return 0;
}