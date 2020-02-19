#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class  Graph
{

	map<ll, list<ll>> adjlist;
public:
	 Graph(){}

	 void addEdge(ll u,ll v, bool bidir = true)
	 {

	 	adjlist[u].push_back(v);
	 	adjlist[v].push_back(u);
	 }

	 void dfsUtil(ll src, map<ll, bool> &visited)
	 {
	 	visited[src]  = true;
	 	for(ll neighbor : adjlist[src])
	 	{
	 		if(!visited[neighbor])
	 		{
	 			dfsUtil(neighbor,visited);
	 		}
	 	}
	 }
	 bool isConnected(ll src, ll dest)
	 {

	 	map<ll, bool> visited;
	 	dfsUtil(src,visited);
	 	if(visited[dest] == true)
	 		return true  ;
	 	else
	 		return false ;

	 }

	
	
};


int main()
{
	ll n,q;
	cin>>n>>q;
	Graph g;
	while(q--)
	{
		ll type, src, dest;
		cin>>type>>src>>dest;

		if(type == 1)
		{
			g.addEdge(src,dest);
		}
		else
		{
			if(g.isConnected(src,dest) ){
				cout<<"Yes\n";
			}
			else{
				cout<<"No\n";
			}
		}
	}

	return 0;
}