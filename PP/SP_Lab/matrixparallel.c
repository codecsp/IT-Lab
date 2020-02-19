#include<stdio.h> 
#include<time.h> 
#include<omp.h>
#define ll long long int 
int main() 
{ 
	clock_t start, end; 
	double cpu_time_used; 
	int n; 
	printf("Enter size of matrix: "); 
	scanf("%d",&n); 
	int i,j,k; ll a[n][n],res[n][n]; 
	for(i=0;i<n;i++) 
		for(j=0;j<n;j++) 
		{
			a[i][j]=1;
			res[i][j]=0;
		} 
	start=clock(); 
	#pragma omp parallel private(i,j) shared(a,res)
	for(i=0;i<n;i++) 
	{
		for(j=0;j<n;j++) 
		{ 
			res[i][j]=0; 
			for(k=0;k<n;k++) 
			res[i][j]+=a[i][k]*a[k][j]; 
		} 
	}
	printf("reslt matrix : \n");
	for(i=0;i<n;i++) 
	{
		for(j=0;j<n;j++) 
		{ 
			printf(" %lld ",res[i][j]); 
			
		} 
		printf("\n");
	}
	
	
	end=clock(); 
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; 
	printf("Total Time taken : %f",cpu_time_used); 
}
