
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstring>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <valarray>
#include <iterator>
#include <functional>
#include <limits>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <stack>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef int64_t ll;
 
#define endl '\n'
#define int ll
ll mod=1e9+7;
ll mod1=1e9+5;
ll power(ll a,ll b)
{
    if(b==0) return 1;
    else if(b%2==0)
        return power((((a%mod)*(a%mod))%mod),b/2)%mod;
    else return ((a%mod)*(power((((a%mod)*(a%mod))%mod),b/2)%mod))%mod;
}

int b[2000001];
int tree[8000001];

void update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        
        tree[node] = val;
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update(2*node, start, mid, idx, val);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update(2*node+1, mid+1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        tree[node] = max(tree[2*node],tree[2*node+1]);
    }
}
int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return max(p1,p2);
}

int32_t main()
{

            int n,k;
            cin>>n>>k;
            int a[n-(n%k)+k];
            memset(a,0,sizeof(a));
            for(int i=0;i<n;++i)
                cin>>a[i];
            for(int i=0;i<=4*n;++i)
                tree[i]=0;
            int dp[n-(n%k)+k];
            memset(dp,0,sizeof(dp));
            int ans=0;
            for(int i=0;i<n-(n%k)+k;++i)
            {
                if(i/k==0)
                {
                    dp[i]=max((ll)0,a[i]);
                    update(1,0,2*n,i,dp[i]);
                }
                else
                {
                    int x=dp[i-k];
                    update(1,0,2*n,i-k,-1e18);
                    int p=query(1,0,2*n,k*(i/k-1),k*(i/k-1)+k-1);
                    dp[i]=max(p+a[i],p);
                    update(1,0,2*n,i-k,x);
                    update(1,0,2*n,i,dp[i]);

                }    
            } 
            for(int i=0;i<n-(n%k)+k;++i)
            {
                ans=max(ans,dp[i]);
            }  
            cout<<ans<<endl;


        


}

