// AUTHOR ---> MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n,k;
	cin >> n >> k;
	int x;
	cin >> x;
	int* arr = new int[n];
	for(int i=1;i<n;i++)
	{
		int y;
		cin >> y;
		arr[i-1] = y-x;
		x=y;
	}
	// for(int i=0;i<n-1;i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i] > k)
		{
			count=0;
		}
		else
		{
			count++;
		}
	}
	cout<<count+1<<endl;
	return 0;
}
