#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totalbooze = k*l;
    int lime = (c*d)/n;
    int drink = totalbooze/(n*nl);
    int salt = p/(n*np);

    cout<<min(lime,min(drink,salt));
    return 0;
}