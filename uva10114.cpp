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
#define Bhul_Code ios_base::sync_with_stdio(0);cout.tie(0);
#define mod 1000000007

using namespace std;

void somadhan()
{
	int month, dep_num;
	long double down_pay, loan;
	while(cin>>month>>down_pay>>loan>>dep_num && month>0)
	{
		long double dep_info[101];
		fl(i,0,101)dep_info[i] = -1;
		fl(i,0,dep_num)
		{
			int x;cin>>x;
			long double y; cin>>y;
			dep_info[x] = y;
		}
		int k = 0;
		long double pay = loan/month, owe = loan;
		loan+=down_pay;
		long double curr_price = loan*(1.0-dep_info[k]);
		long double reduce = dep_info[k];
		while(curr_price<owe)
		{
			k++;
			owe-=pay;
			if(dep_info[k]>0)reduce = dep_info[k];
			curr_price*=(1.0-reduce);
		}
		string s = "month";
		if(k!=1)s+='s';
		cout<<k<<" "<<s<<nl;		

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
