// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string s;
	cin >> s;
	int len = s.length();
	int low =0,high=0;
	for(int i=0;i<len;i++)
	{
		if(islower(s[i]))
			low++;
		else
			high++;
	}
	if(low-high==0 || low > high)
	{
		transform(s.begin(),s.end(),s.begin(),::tolower);
		cout<<s;
	}
	else if(low < high)
	{
		transform(s.begin(),s.end(),s.begin(),::toupper);
		cout<<s;
	}
	return 0;
}
