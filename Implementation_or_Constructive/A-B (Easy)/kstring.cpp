#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> freq(26,0);
    for(char i:s){
        freq[i-'a']++;
       
    }
    string pattern="";
    for(int i=0;i<26;i++){
        if(freq[i]%n!=0){
            cout<<-1<<endl;
            return 0;
        }
        else{
            int a = freq[i]/n;
            for(int j=0;j<a;j++) pattern+=(i+'a');
        }
    }
    for(int i=0;i<n;i++) cout<<pattern;
    return 0;
    
    
}