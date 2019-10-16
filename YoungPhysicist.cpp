// Author:: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH;
// http://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sx=0,sy=0,sz=0;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    (sx==0 && sy==0 && sz==0) ? cout<<"YES": cout<<"NO";
    return 0;
}
