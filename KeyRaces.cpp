// AUTHOR ---> MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	int v1,v2;
	cin >> v1 >> v2;
	int t1,t2;
	cin >> t1 >> t2;
	int term = 2*t1+v1*n;
	int term2 = 2*t2+v2*n;
	// cout<<"term: "<<term<<" "<<"term2:: "<<term2<<endl;
	if(term > term2)
		cout<<"Second";
	else if(term == term2)
		cout<<"Friendship";
	else
		cout<<"First";
	return 0;
}
