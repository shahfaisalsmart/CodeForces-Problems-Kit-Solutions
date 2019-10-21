//THIS CODE IS IMPLEMENTED BY MOHAMMAD FAISAL. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    string a, b, c, d, e;
   //cout<< s[0];
    cin >> a >> b >> c >> d >> e;
   /* if(s[0]==e[0])
        cout<<"YES"; */
   if(s[0]==a[0] || s[0]==b[0] || s[0]==c[0] || s[0]==d[0] || s[0]==e[0])
        cout<<"YES"<<endl;
    else if(s[1]==a[1] || s[1]==b[1] || s[1]==c[1] || s[1]==d[1] || s[1]==e[1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl; 
    return 0;
}
