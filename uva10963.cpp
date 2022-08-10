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
	getchar();//optional
	int w; cin>>w;
	string ans = "yes";
	int prev = -1;
	fl(i,0,w)
	{
		int x, y; cin>>x>>y;
		int gap = abs(x-y);
		if(i>0 && gap!=prev)ans = "no";
		prev = gap;
	}	
	cout<<ans<<nl;
}


int main()
{
	Bhul_Code

	int t;cin>>t;
	getchar();//optional
	while(t--){
		somadhan();
		if(t)cout<<nl;//must
	}

	The_End;
}	
