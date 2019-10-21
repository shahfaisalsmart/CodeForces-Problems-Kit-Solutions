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
	int m;
	cin >> m;
	int * arr = new int[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	long long* res = new long long [n];
	sort(arr,arr+n,greater<int>());
	// reverse(arr,arr+n); 
	// for(int i=0;i<n;i++)
	// 	cout << arr[i];
	res[0] = arr[0];
	// cout<<res[0]<<" ";
	for(int i=1;i<n;i++)
	{
		res[i] = res[i-1] + arr[i];
	}
	// for(int i=0;i<n;i++)
	// 	cout<< res[i]<<" ";
	for(int i=0;i<n;i++)
	{
		if(m>res[i])
		{
			// cout<<"H";
			continue;
		}
		else if(m<=res[i])
		{
			cout<<i+1;
			break;
		}
	}
	return 0;
}
