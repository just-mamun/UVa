#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, b, h, w;
	while(cin>>n>>b>>h>>w)
	{
		cerr<<n<<" "<<b<<" "<<h<<" "<<w<<'\n';
		bool ok = 0;
		int ans = INT_MAX;
		while(h--)
		{
			int p; cin>>p;
			int week = w;
			bool bed = 0;
			while(week--)
			{
				int x; cin>>x;
				if(x>=n)
				{
					bed = 1;
				}
			}
			int cost = n*p;
			if(bed && cost<=b)
			{
				ok = 1;
				ans = min(ans, cost);
			}
		}
		if(ok)cout<<ans<<'\n';
		else cout<<"stay home"<<'\n';
	}
	return 0;
}