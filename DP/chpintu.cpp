#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;

		std::vector<int> v1;
		std::vector<int> v2;

		std::map<int, int> ans_map;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin>>tmp;
			v1.push_back(tmp);
		}


		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin>>tmp;
			v2.push_back(tmp);
		}

		for (int i = 0; i < n; ++i)
		{
			ans_map[v1[i]] += v2[i];
		}

		int mini = INT_MAX;
		for(auto val : ans_map)
		{
			mini =  min(val.second,mini);
		}

		cout<<mini<<endl;

	}

	return 0;
}