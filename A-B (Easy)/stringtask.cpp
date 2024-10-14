#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans = "";
    for(char &i:s){
        if(i<96) i+=32;
        if(i!='a'&&i!='e'&&i!='i'&&i!='o'&&i!='u'&&i!='y'){
            ans = ans+'.'+i;
        }
    }
    cout<<ans<<endl;
    return 0;
}