#include <bits/stdc++.h>
using namespace std;
 
#define fast { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define pb push_back
#define ll long long
 
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
 
#define infi INT_MAX
#define infl LONG_MAX
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fi(i,a,b) for(ll i=(b-1);i>=a;i--)
#define F first
#define S second
#define G(a,b) get<a>(b)
#define MP make_pair
#define MT make_tuple
#define pll pair<ll,ll> 
#define endl "\n"



void func()
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
  bool flag=0;
  ll ans=0,cnt=0;
  f(i,0,n) if(s[i]=='(') cnt++;
  if(cnt!=n-cnt) 
  {
    cout<<"-1\n";
    return;
  }
  cnt=0;
  f(i,0,n)
  {
    if(s[i]=='(') cnt++;
    else cnt--;

    if(cnt<0 && flag==0)
    {
      ans++;
      flag=1;
    }

    else if(cnt<=0 && flag==1) ans++;

    else flag=0;
  }
  cout<<ans<<endl;
}
 
int main() 
{
    fast
    //freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    
    ll ntc=1;
    //cin>>ntc;
 
    while(ntc)
    {
      func();
      ntc--;
    }
 
    return 0;
}