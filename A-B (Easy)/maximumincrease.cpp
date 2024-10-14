#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int j=0,i=0;
    int size=1;
    while(j<n-1){
        if(j<n-1&&arr[j+1]>arr[j]) j++;
        else{
            size = max(size,j-i+1);
            i=j+1;
            j++;
        }
        // cout<<i<<j<<endl;
    }
    size = max(size,j-i+1);
    cout<<size;
    return 0;
}