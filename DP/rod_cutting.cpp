#include<stdio.h> 
#include<limits.h> 
#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b)? a : b;} 

int cutRod(int price[], int n) 
{ 
if (n <= 0) 
	return 0; 
int max_val = INT_MIN; 

for (int i = 0; i<n; i++) 
		max_val = max(max_val, price[i] + cutRod(price, n-i-1)); 

return max_val; 
} 

int main() 
{ 
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	printf("%d", cutRod(arr, n)); 
	return 0; 
} 
