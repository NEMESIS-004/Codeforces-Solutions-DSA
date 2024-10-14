#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool play=0;

    for(int i=0;i<5;i++){
        string j;
        cin>>j;
        if(j[0]==s[0]||j[1]==s[1]) play=true;
    }
    if(play) cout<<"YES";
    else cout<<"NO";
    return 0;
}