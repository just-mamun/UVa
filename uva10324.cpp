#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
	string s;
	int test = 1;
	while(cin>>s && s[0]!='\n')
	{
		//int size = s.size();
		int query; cin>>query;
		cout<<"Case "<<test<<":"<<nl;
		while(query--)
		{
			int l, r; cin>>l>>r;
			int lower = min(l,r);
			int upper = max(l,r);
			string ans = "Yes";
			cerr<<lower<<" "<<upper<<nl;
			for(int i = lower+1; i<=upper; i++)
			{
				cerr<<s[i]<<" "<<s[i-1]<<nl;
				if(s[i]!=s[i-1])
				{
					ans = "No";
					break;
				}
			}
			cerr<<nl;
			cout<<ans<<nl;	
		}
		test++;
	}
	return 0;
}