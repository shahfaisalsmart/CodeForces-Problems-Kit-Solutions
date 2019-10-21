// AUTHOR:: MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin >> n >> a >> b;
	
	if(b==0)
		cout<<a;
		
	if(b<0)
	{
		int step = a+b;
		while(step<0)
			step+=n;
		if(step==0)
			cout<<n;
		else
			cout<<step;
	}
	if(b>0)
	{
		int temp=a+b;
		temp%=n;
		
		if(temp==0)
			cout<<n;
		else 
			cout<<temp;
	}
	return 0;
}
