#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {string s;
    cin>>s;
    vector<int> ans;
    int n = s.size();
    int tens = pow(10,n-1);
    
    for(char i:s){
        if(i=='0'){
            tens=tens/10;
            continue;
        }
        int num = (i-'0')*tens;

        ans.push_back(num);
        tens=tens/10;
    }
    cout<<ans.size()<<endl;
    for(int i:ans) cout<<i<<" ";}
    return 0;
}