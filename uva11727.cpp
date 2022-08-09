#include <bits/stdc++.h>
#define The_End return 0
#define nl '\n'
#define gl getline //(cin>>ws,s);
#define ll long long
#define st(n) fixed << setprecision(n)
#define ys cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define fl(i, a, n) for(int i = a; i < n; i++)
#define fll(i, n, a) for(int i = n; i >= a; i--)
#define error(x) cerr<<x
#define Bhul_Code ios_base::sync_with_stdio(0);cout.tie(0);
#define mod 1000000007

using namespace std;

void somadhan()
{
	int test; cin>>test;
	fl(i,1,test+1)
	{
		int x, y, z;cin>>x>>y>>z;
		int maxx = max({x,y,z});
		int minn = min({x,y,z});
		int sum = x+y+z;
		cout<<"Case "<<i<<": "<<(sum - maxx - minn)<<nl;
	}
}


int main()
{
	Bhul_Code

	// int t;cin>>t;

	// while(t--)
	somadhan();

	The_End;
}	
