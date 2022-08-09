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
	string s; cin>>s;
	int n = s.size();
	if(n<=2) cout<<"+"<<nl;
	else if(s[n-1]=='5'&&s[n-2]=='3')cout<<"-"<<nl;
	else if(s[0]=='9' && s[n-1]=='4')cout<<"*"<<nl;
	else cout<<"?"<<nl;
}


int main()
{
	Bhul_Code

	int t;cin>>t;

	while(t--)
	somadhan();

	The_End;
}	
