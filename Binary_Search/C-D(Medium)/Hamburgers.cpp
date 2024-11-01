#include<bits/stdc++.h>
using namespace std;

int main(){
    

//     string t;
// 	cin>>t;
// 	int cnt[3]={};
// 	for (auto i:t)
// 		if (i=='B')
// 			cnt[0]++;
// 		else if(i=='S')
// 			cnt[1]++;
// 		else
// 			cnt[2]++;
// 	int a[3],c[3];
// 	for (int i=0;i<3;i++)
// 		cin>>a[i];
// 	for (int i=0;i<3;i++)
// 		cin>>c[i];
// 	int r;
// 	cin>>r;
// 	int s=0,e=1e13;
// 	while (s+1<e)
// 	{
// 		int mid=(s+e)/2;
// 		int b[3],x=0;
// 		for (int i=0;i<3;i++)
// 			b[i]=max(0LL,cnt[i]*mid-a[i]);
// 		for (int i=0;i<3;i++)
// 			x+=b[i]*c[i];
// 		if (x<=r)
// 			s=mid;
// 		else
// 			e=mid;
// 	}
// 	cout<<s<<endl;
		
// 	return 0;

    string s;
    long long numberOfB, numberOfC, numberOfS;
    long long costOfB, costOfC, costOfS, rubles;
    long long B=0, S=0, C=0;
    cin>>s>>numberOfB>>numberOfS>>numberOfC>>costOfB>>costOfS>>costOfC>>rubles;
    
    for(char i:s){
        if(i=='B')B++;
        if(i=='C')C++;
        if(i=='S')S++;
    }
    if(B==0) costOfB = 0;
    if(S==0) costOfS = 0;
    if(C==0) costOfC = 0;
    long long low = 0;
    long long high = 1e13;
  
    while(low<=high){
        
        long long mid = (low+high)/2;
        
        if(max((mid*B-numberOfB)*costOfB,0ll) + max((mid*S-numberOfS)*costOfS,0ll) + max((mid*C-numberOfC)*costOfC,0ll)<=rubles){
			
            low = mid+1;
        }
        else high = mid-1;
    }
    cout<<low-1;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// string p;
// int nb,ns,nc;
// long long m;
// int p1,p2,p3;
// int b=0,s=0,c=0;
// bool check(long long mid)
// {
// 	long long n=0;
// 	if(mid*b>nb) n+=(mid*b-nb)*p1;
// 	if(mid*s>ns) n+=(mid*s-ns)*p2;
// 	if(mid*c>nc) n+=(mid*c-nc)*p3;
// 	return n<=m;
// }
// int main()
// {
// 	cin>>p;
// 	cin>>nb>>ns>>nc;
// 	cin>>p1>>p2>>p3;
// 	cin>>m;
// 	for(int i=0;i<p.size();i++)
// 	{
// 		if(p[i]=='B') b++;
// 		else if(p[i]=='S') s++;
// 		else if(p[i]=='C') c++;
// 	}
// 	long long l=0,r=m+max(nb,max(ns,nc));
// 	while(l<=r)
// 	{
// 		long long mid=(l+r)/2;
// 		if(check(mid))
// 		{
// 			l=mid+1;
// 		}
// 		else 
// 		r=mid-1;
// 	}
// 	cout<<r;
// 	return 0;
// } 