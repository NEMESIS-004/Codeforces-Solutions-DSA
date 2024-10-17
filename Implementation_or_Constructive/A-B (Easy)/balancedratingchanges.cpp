#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, z = 1;
    cin >> n;
    while(n--){
        cin >> x;
        if(x % 2) cout<<(x+z)/2<<endl,z*=-1;
        else cout << x / 2 << endl;
    }
    return 0;
}