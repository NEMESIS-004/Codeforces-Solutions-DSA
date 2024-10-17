#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool convert=true;
    for(int i=1;i<s.size();i++){
        if(s[i]>95){
            convert = false;
            break;
        }
    }
    if(convert){
        if(s[0]>95) s[0]-=32;
        else if(s[0]<96) s[0]+=32;
        for(int i=1;i<s.size();i++){
            if(s[i]<96)s[i]+=32;
        }
    }
    cout<<s;
    return 0;
}