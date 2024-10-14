#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin>>name;
    int unique=0;
    vector<int>freq(26,0);
    for(char i:name){
        if(freq[i-'a']==0){
            unique++;
            freq[i-'a']=1;
        }
    }
    if(unique%2==1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}