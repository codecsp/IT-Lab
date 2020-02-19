
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool comp(string a, string b)
{
	if(a.size()<=b.size() && b.substr(0,a.size()) == a ) return false;
    else if(b.size()<= a.size() && a.substr(0,b.size()) == b) return true;
    else
        return a < b;
}


int main() 
{
	ll n;
	cin>>n;
	std::vector<string> arr_string;
	while(n--)
	{
		string tmp;
		cin>>tmp;
		arr_string.push_back(tmp);
	}

	sort(arr_string.begin(),arr_string.end(),comp);

	for(string s: arr_string)
		cout<<s<<endl;

	return 0;
}
