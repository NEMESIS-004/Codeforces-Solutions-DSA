#include<bits/stdc++.h>
using namespace std;

int main(){
    string num;
    cin>>num;
    int sev=0,four=0;
    
    for(char i:num){
        if(i=='4') {
            four++;
        }
        else if(i=='7') sev++;
    }
    if(four+sev==4||four+sev==7) cout<<"YES";
    else cout<<"NO";
    return 0;
}