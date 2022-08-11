#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

int main()
{
	int n, test = 1;
	while(cin>>n)
	{
		if(test>1)cout<<nl;//if a new test starts except the first.need a blank space
		unordered_map<string, int> mp;//storing people with money
		string s[n];//to output serially, stroing people
		for(int i = 0; i<n; i++)
		{
			cin>>s[i];
		}
		int y = n;//all of them will exchange money
		while(y--)
		{
			string giver; cin>>giver;
			int money, friends; cin>>money>>friends;
			if(friends==0)continue;//if no people then no need to calculate
			int x = money/friends;//determining how much one of them get
			mp[giver]-=(x*friends);//spent
			for(int i = 1; i<=friends; i++)
			{
				string taker; cin>>taker;
				mp[taker]+=x;
			}
		}
		for(int i = 0; i<n; i++)
		{
			cout<<s[i]<<" "<<mp[s[i]]<<nl;
		}
		test++;//to determine it's not the first printing output
	}

	return 0;
}