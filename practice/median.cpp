#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	ll n;
	cin>>n;
	std::vector<ll> v1(2*n,0);
	
	for(ll i=0;i<2*n;i++)
	{
		cin>>v1[i];
	}

	sort(v1.begin(),v1.end());

	ll size = 2*n ;
	if(2*n % 2 == 1)
	{
		cout<<v1[size/2]<<endl;

	}
	else
		cout<<(v1[size/2]+v1[size/2-1])/2<<endl;


}