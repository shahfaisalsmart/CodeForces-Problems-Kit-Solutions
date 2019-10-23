// Author:: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	
	map<int,int>:: iterator it;
	int mx = -1;
	for(it=mp.begin();it!=mp.end();it++)
	{
		if(it->second > mx)
			mx = it->second;
	}
	cout<<mx<<" "<<mp.size()<<endl;
	return 0;
}
