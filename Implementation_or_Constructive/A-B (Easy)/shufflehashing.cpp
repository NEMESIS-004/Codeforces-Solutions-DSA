#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string s,t;
    cin >> s >> t;
    int n = s.size(),m = t.size();
    
    sort(s.begin(),s.end());
    for(int i=0;i<m-n+1;i++){
        string tmp = t.substr(i,n);
        sort(tmp.begin(),tmp.end());
        if(tmp == s){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}
 
int main(){
    int t;
    cin >> t;
    while(t--)solve();
}