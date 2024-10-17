
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,moves=0;
	cin>>n>>m;
	while(n<m)
	{
		if(m%(n*2)==0) n*=2;
		else n*=3;
		moves++;
	}
	if(n==m)cout<<moves;
	else cout<<-1;
}