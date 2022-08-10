#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int recc(ll n)
{
	if(n<=9)return n;
	else
	{
		ll sum = 0;
		while(n>0)
		{
			sum+=(n%10);
			n/=10;
		}
		return recc(sum);
	}
}

int main()
{
	ll n;
	while(cin>>n && n!=0)
	{
		cout<<recc(n)<<nl;
	}
	return 0;
}