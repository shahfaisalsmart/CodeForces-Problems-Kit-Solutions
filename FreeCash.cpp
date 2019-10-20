// Author:: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    
    // int count=t+1;
    int count=0;
    map<pair<int,int>,int> v;
    while(t--)
    {
        int h,m;
        cin >> h >> m;
        v[make_pair(h,m)]++;
    }
    for(map<pair<int,int>,int>::iterator it=v.begin();it!=v.end();it++)
    {
    	if(count<it->second)
    	{
    		count=it->second;
    	}
    
    }
    // int len = v.size();
    // cout<<"len:: "<<len<<endl;
    // cout<<count-len<<endl;
    cout<<count<<endl;
    return 0;
}
