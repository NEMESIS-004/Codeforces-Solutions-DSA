#include<bits/stdc++.h>
using namespace std;

int main(){

    int q;
    cin>>q;
    while(q--){
        string s,t;
        cin>>s>>t;
        int i=0;
        int j=0;
        while(i<s.size()&&i<t.size()&&s[i]==t[i]){
            i++;
        }
        if(t.size()>s.size()){
            
            while(j<s.size()&&j<t.size()&&s[0]!=t[j])j++;
            
            
        }
        else if(s.size()>t.size()){
            
            while(j<s.size()&&j<t.size()&&t[0]!=s[j])j++;
            
        }
        int k=0;
        while(j<s.size()&&j<t.size()&&s[k]==t[j]){
            j++;
            k++;
        }

        int ans = s.size()+t.size()-(max(k,i));
        if(i!=0||k!=0) ans++;
        cout<<ans<<endl;

    }
    return 0;
}