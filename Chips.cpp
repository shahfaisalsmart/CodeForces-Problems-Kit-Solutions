/*
    Author: Mohammad faisal
    Problem: chips.
    Date: 09/08/2019
 
*/
// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<stack>
#include<map>
#include<set>
#include<numeric>
using namespace std;
// long long gcd(long long a,long long b)
// {
//   if(b)
//     return gcd(b,a%b);
//   else
//     return a;
// }
int main()
{
  int n,m;
  cin >> n >> m;
  int * arr = new int[n];
  iota(arr,arr+n,1);
  // vector<int> v,b;
  // iota(v.begin(),v.begin()+n,1);
  // for(vector<int>::iterator it=v.begin();it!=v.end();it++)
  //   cout<<*it<<" ";
  // for(int i=0;i<n;i++)
  //   cout<<arr[i]<<" ";
  // cout<<endl;
  int * part = new int[n];
  partial_sum(arr,arr+n,part);
  // for(int i=0;i<n;i++)
  //   cout<<part[i]<<" ";
 
  if(m < part[n-1])
  {
    for(int i=0;i<n;i++)
  {
    if(m < part[i])
    {
      cout<<max(part[i-1],m)-min(part[i-1],m);
      return 0;
    }
  } 
  }
 
  int temp;
  temp = max(part[n-1],m)%min(part[n-1],m);
  // cout<<"\nTemp: "<<temp<<endl;
  if(temp==0){
    cout<<0<<endl;
    return 0;
  }
  for(int i=0;i<n;i++)
  {
    if(temp == part[i])
    {
      cout<<temp-part[i]<<endl;
      break;
    }
    if(temp < part[i])
    {
      cout<<max(part[i-1],temp)-min(part[i-1],temp)<<endl;
      break;
    }
  } 
  return 0;
}
