#include<bits/stdc++.h>
using namespace std;

// method 1

int count_set(int n)
{   
    int ans=0;
    while(n>0)
    {
        ans+=n&1;
        n = n>>1;
    }
    return ans;
}

//method 2

int count_set_faster(int n)
{
    int ans = 0;
    while(n>0)
    {
        n = n&(n-1) ;
        ans++;
    }
    return ans;
}



int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"\nThe total set bits in "<<n<<"are : \n" ;
    cout<<count_set(n)<<endl;
    cout<<count_set_faster(n)<<endl;
    cout<<__builtin_popcount(n)<<endl;



    return 0;
}