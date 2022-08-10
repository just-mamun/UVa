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
	int num_farmer; cin>>num_farmer;
	ll ans = 0;
	while(num_farmer--)
	{
		int x, y, z;cin>>x>>y>>z;
		ans += (x*z)*1LL;
	}
	cout<<ans<<nl;
}


int main()
{
	Bhul_Code

	int t;cin>>t;

	while(t--)
	somadhan();

	The_End;
}	
