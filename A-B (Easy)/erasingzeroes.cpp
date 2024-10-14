#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool one=false;
        int zeroes=0;
        int count=0;
        for(char i:s){
            if(one&& i=='0') count++;
            else if(one && i=='1'){
                zeroes+=count;
                count=0;
            }
            else if(!one && i=='1') one=true;
        }
        cout<<zeroes<<endl;
    }
    return 0;
}   