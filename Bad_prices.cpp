// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
/*
    Bad Prices
    Codeforces Round #582 DIV 3
    Dated: 3-sept-2019
*/
#include<bits/stdc++.h>
// #include<iostream>
// #include<map>
// #include<algorithm>
// #include<vector>
using namespace std;
// vector<vector<int> > graph;
// vector<bool> visited;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int imax = 1e9;
        int bad_price =0;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i] > imax)
                bad_price++;
            imax = min(imax,arr[i]);
        }
        cout<<bad_price<<endl;
        delete[] arr;
        // cout<<"imax: "<<imax<<"  "<<"imin: "<<imin<<endl;
    }
    return 0;
}
 
