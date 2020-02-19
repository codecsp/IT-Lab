#include<bits/stdc++.h>
using namespace std;

int func(int ind, string s,int res, int sum,int m)
{
	if(ind ==  -1)
	{
		if(sum%m == 0)
			return 1 ;
		else
			return 0 ;
	}
	else
	{
		if(s[ind] == '_')
		{
			return func(ind-1,s,res,sum*2,m)+ func(ind-1,s,res+sum,sum*2,m);
		}
		else
		{
			if(s[ind] == '1')
			{
				return func(ind-1,s,res+sum,sum*2,m);
			}
			else
				return func(ind-1,s,res,sum*2,m);

		}

	}


}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;

		string s;
		cin>>s;

		int sum = 1;
		int res = 0;
		int ans = func(n-1,s,res,sum,m);
		cout<<ans<<endl;

	}


}