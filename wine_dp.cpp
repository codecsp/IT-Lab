#include<bits/stdc++.h>
using namespace std;

int func(int v[],int i,int j,int dp[][222], int yr)
{

	if(i>j)
		return 0;

	if(dp[i][j] != 0)
			return dp[i][j];

	int cost1 = v[i]*yr + func(v,i+1,j,dp,yr+1);
	int cost2 = v[j]*yr + func(v,i,j-1,dp,yr+1);

	dp[i][j] = max(cost1,cost2);

 return dp[i][j];

}


int main()
{
	int n;
	cin>>n;

	int v[n];
	for(int i=0;i<n;i++)
		cin>>v[i] ;

	int dp[222][222] ;
	int maxi = func(v,0,n-1,dp,1);

	cout<<maxi;

	return 0;
}