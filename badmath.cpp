#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
using ll = long long int;
const ll maxs = 1e5+5;

ll n,m;
string s;

ll rec(ll ind,ll sum,ll res)
{
    if(ind == -1) 
    {
        if(sum%m == 0)
            return 1;
        else
            return 0;
    }


    if(s[ind] != '_') 
    {
        if(s[ind] == '1')
            return rec(ind-1,(sum+res)%m,(2*res)%m);
        else
            return rec(ind-1,sum,(2*res)%m);
    }
    else
        return rec(ind-1,sum,(2*res)%m )        +
               rec(ind-1,(sum + res)%m,(2*res)%m) ;
}


int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    cin>>t;
    while(t--)
    {
        cin >> n >> m;
        cin >> s;
        cout << rec(n-1,0,1) << endl;
    }
    return 0;
}