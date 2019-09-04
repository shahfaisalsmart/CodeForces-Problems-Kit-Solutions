// Author: Mohammad Faisal
/*
    Book Reading
    Codeforces Round #582 DIV 3
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long int n,k;
        cin >> n >> k;
        vector<int> precompute(11,0);
        if(n < k)
        {
            cout<<"0"<<endl;
            // break;
        }
        else
        {
            unsigned long long int temp,key,l;
            temp = k%10;
            l=temp;
  
            precompute[0] = 0;
            for(int i=1;i<=10;i++)
            {
                precompute[i] = precompute[i-1] + (temp%10);
                temp +=l;
            }
            temp = n/k;
            key = temp%10;
            temp = temp/10;
            cout<<(temp*precompute[10])+precompute[key]<<endl;
 
        }
        precompute.clear();
    }
    return 0;
}
 
