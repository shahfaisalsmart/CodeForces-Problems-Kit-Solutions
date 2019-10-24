// AUTHOR ---> MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	for(int i=1;i<=1000;i++)
		s+=(to_string(i));
	// cout<<s;
	int n;
	cin >> n;
	cout<<s[n-1]<<endl;
	return 0;
}
