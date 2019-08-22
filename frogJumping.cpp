/*
  Author: Mohammad Faisal
  Problem: Frog Jumping
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a,b,k,sum=0;
      //  int count=0;
        cin >> a >> b >> k;
        if(a==b && k%2==0)
            cout<<0<<endl;
        if(a==b && k%2!=0)
            cout<<a<<endl;
        if(a!=b && k%2==0)
            cout<<(a*(k/2)-b*(k/2))<<endl;
        if(a!=b && k%2!=0)
            cout<<(a*((k/2)+1)-b*(k/2))<<endl;
    }
    return 0;
}
