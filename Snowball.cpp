//THIS CODE IS IMPLEMENTED BY MOHAMMAD FAISAL. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int w,h,u1,h1,u2,h2;
    cin >> w >> h;
    cin >> u1 >> h1;
    cin >> u2 >> h2;
  //  w+=h;
    while(h)
    {
        w+=h;
        if(h==h1)
        {
            w-=u1;
            if(w<0)
                w=0;
        }
        else if(h==h2)
        {
            w-=u2;
            if(w<0)
                w=0;
            
        }
        h--;
       // cout << w << " " << h << " ";
    }
    //cout<<endl;
    cout<<w;
return 0;
}
