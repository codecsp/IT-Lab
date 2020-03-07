#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define F first
#define S second
#define PB push_back
#define MAX 100100


const ll mod = 1000000007;
using namespace std;

ll fast_power(ll base, ll power) {
    ll result = 1;
    base=base%mod;
    while(power > 0) {
        if(power % 2 == 1) {
            result = (result*base) % mod;
        }
        base = (base * base) % mod;
        power=power>>1;
    }
    return result;
}


int main()
{
    fio;
    
    
        ll n, x, y;
        cin >> n;
        
        ll o = 0, e = 0; bool oe = 0;
        
        for(ll i = 0; i < n; i++)
        {
            cin >> x >> y;
            ll tmp = x % 2;
            ll tmp1 = y % 2;
            if(tmp != 0 && tmp1 != 0)
            {
                o++;
            }
            else if(tmp != 0 || tmp1 != 0)
            {
                oe = 1;
            }
            else e++;
        }
        
        if(oe)
        {
            cout << fast_power(2, n-1) << endl;
           // continue;
        }
        else{
            if(o % 2)
                cout << fast_power(2, n) << endl;
            else cout << 0 << endl;
        }
    
    return 0;
}
