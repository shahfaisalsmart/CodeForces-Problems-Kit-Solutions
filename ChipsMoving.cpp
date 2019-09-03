// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
/*
    Chips Moving;
    Codeforces Round: 582 Div 3
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long odd = 0;
    for(int i=0;i<n;i++)
    {
        long long v;
        cin >> v;
        (v&1) ? odd++: odd+=0;
    }
    cout<<min(odd,n-odd);
    return 0;
}
