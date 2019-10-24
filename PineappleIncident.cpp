// AUTHOR ---> MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long t,f,d;
	cin >> t >> f >> d;
	if(t==d){
		cout<<"YES";
		return 0;
	}
	d-=t;
	if(f>d)
		cout<<"NO";
	else{
	(d%f==0 ||d%f==1) ? cout<<"YES": cout<<"NO";
    }
	return 0;
}
