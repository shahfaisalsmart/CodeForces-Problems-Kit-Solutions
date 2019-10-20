// Author:: MOHAMMAD FAIS
// BEGINNING WITH THE NAME OF ALMIGHTY GOD
// https://c...content-available-to-author-only...s.com/problemset/problem/705/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string hate = "I hate";
	string love = "I love";
	
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		if(i&1)
		{
			cout<<hate<<" ";	
		}
		else{
			cout<<love<<" ";
		}
		if(i==n)
			continue;
		cout<<"that ";
	}
	cout<<"it";
	return 0;
}
