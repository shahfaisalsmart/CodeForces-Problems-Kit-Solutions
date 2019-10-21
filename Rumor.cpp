// Author: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH SUBHANA WATA ALLAH
#include<bits/stdc++.h>
using namespace std;
long long mn = INT_MAX;
long long  ans =0;
bool visited[111111];
long long gold[111111];
// vector<int>gold;
vector<long long>graph[111111];
void dfs(long long s)
{
		visited[s] = true;
		// mn = min(mn,gold[s]);
		if(mn>gold[s])
			mn = gold[s]; 
		// cout<<"DFS ME MIN VALUE: "<<mn<<" ";
		// cout<<endl;
		for(long long i: graph[s]){
			if(!visited[i])
				dfs(i);
		}
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n,m;
	cin >> n >> m;
	// map<int,vector<int>>graph;
	// vector<int>gold;
	for(long long i=1;i<=n;i++)
	{
		cin >> gold[i];
	}
	while(m--){
		long long x,y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	
	// vector<bool>visited(111111,false);
	for(long long i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			dfs(i);
			ans+=mn;
			mn = INT_MAX;
		}
	}
	// cout<<"pre: "<<ans<<endl;
	for(long long i=1;i<=n;i++)
	{
		if(!visited[i])
			ans+=gold[i];
	}
	cout<<ans<<endl;
	return 0;
}
