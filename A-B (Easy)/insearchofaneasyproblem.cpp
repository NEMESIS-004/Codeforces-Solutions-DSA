#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool hard=0;
    for(int i=0;i<n;i++){
        bool c;
        cin>>c;
        hard=c||hard;
    }
    if(hard) cout<<"hard";
    else cout<<"easy";
    return 0;

}