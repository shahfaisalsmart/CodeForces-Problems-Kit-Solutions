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
	string s;
	cin >> s;
	
	int a = count(s.begin(),s.end(),'0');
	int b = count(s.begin(),s.end(),'1');
	
	cout<<abs(a-b)<<endl;
	return 0;
	
}
