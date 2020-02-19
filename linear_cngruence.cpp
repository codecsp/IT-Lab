#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() 
{
	ll n  ;
	cin>>n ;
	
	vector<ll>arr(n);
	vector<ll>rem(n);

	for(ll i=0;i<n;i++)
		cin>>arr[i];

	for(ll i=0;i<n;i++)
		cin>>rem[i];

	ll num = 1;
	while(1)
	{
		bool flag  = true ;
		for (ll i = 0; i < n; ++i)
		{
			if(num%arr[i] == rem[i])
			{
				continue;
			}
			else
			{
				flag  = false;
				break;
			}
		}

		if(flag == true)
		{
			cout<<num<<endl;
			break;
		}

		++num;


	}
	

	return 0;



}