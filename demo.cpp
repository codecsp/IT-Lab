void dfsHelper(T curr,map<T,bool>&visited)
 	{
 		visited[curr]=true;
 		cout<<curr<<" ";
 		for(T i : adjList[curr])
 		{
 			if(!visited[i])
 				dfsHelper(i,visited);

 		}
 	}

 	void dfs(T src)
 	{
 		std::map<T, bool> visited;
 		dfsHelper(src,visited);
 		cout<<endl;
 		int connected=1;

 		for(auto i : adjList)
 		{
 			if(visited[i.first]==false)
 			{
 				dfsHelper(i.first,visited);
 				cout<<endl;
 				connected++;
 			}

 		}

 		cout<<"\nThe number of connected components is : "<<connected<<endl;
 	}

int main()
{
	  ios_base::sync_with_stdio(false);
	  cin.tie(NULL);
	  cout.tie(NULL);
}