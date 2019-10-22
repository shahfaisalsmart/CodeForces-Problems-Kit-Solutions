// Author:: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH SUBHANA-WATA-ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long n;
	cin >> n;
	long long int sum =0,even=0;
	long long count=0;
	long long mn = INT_MAX;
	for(long long i=0;i<n;i++)
	{
		long long x;
		cin >> x;
		if(x&1)
		{
			sum+=x;
			count++;
			mn = min(x,mn);
		}
		else
		{
			even+=x;
		}
	}
	// cout<<"Count::"<<count<<" "<<"mn:: "<<mn<<" "<<"sum:: "<<sum<<endl;
	if(count==1 && (sum%2!=0 && even==0)) 
	{
		cout<<"0"<<endl;
	}
	else
	{
		if(count%2!=0)
		{
			sum-=mn;
		}
		
		cout<<even+sum<<endl;
	}
	return 0;
}
