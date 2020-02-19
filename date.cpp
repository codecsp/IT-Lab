#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

	

int dow(ll d, ll m, ll y)
{
    int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
    y -= m < 3;
    return (y + y/4 - y*3/400  - y/4000 /* if it will be implemented in future */ + t[m-1] + d)%7;
}


int main()
{
    
	ll t;
	cin>>t;
	std::map<ll, string> mp_day ;
	std::map<string, ll> mp_day_date ;

	mp_day_date["Sunday"] = 0;
	mp_day_date["Monday"] = 1;
	mp_day_date["Tuesday"] = 2;
	mp_day_date["Wednesday"] = 3;
	mp_day_date["Thursday"] = 4;
	mp_day_date["Friday"] = 5;
	mp_day_date["Saturday"] = 6;


	mp_day[0] = "Sunday";
	mp_day[1] = "Monday";
	mp_day[2] = "Tuesday";
	mp_day[3] = "Wednesday";
	mp_day[4] = "Thursday";
	mp_day[5] = "Friday";
	mp_day[6] = "Saturday";
	

	while(t--)
	{
		ll m1,y1;
		ll m2,y2;

		cin>>m1>>y1;
		cin>>m2>>y2;

		for (ll i = y1; i <= y2; ++i)
		{
			int day1 = dow(1,2,i) ;

			string day = mp_day[day1];

			ll check_neg = mp_day_date["Friday"]- mp_day_date[day];
			if(check_neg < 0)
				check_neg+=7;
			
			ll aa = 1+check_neg ;

			ll bb  = aa+10 ;

			//cout<<aa<<" --> "<<bb <<endl;
			
			bool Prime = false ;

			if(i % 400 ==0 || (i%4==0 && i%100 != 0))
				Prime  = true ;

			if(Prime)
			{
				int day2 = dow(29,2,i);
				string ss = mp_day[day2] - mp_day[day2] - ;

				ll check = mp_day_date["Friday"]- mp_day_date[day];
			


			} 
		}

	    


	    

	}
    
	return 0;
}

