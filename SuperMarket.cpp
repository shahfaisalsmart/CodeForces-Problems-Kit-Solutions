
 // Author: Mohammad Faisal
/*
	problem: SuperMarket
	codeforces problem 
	date: 01/08/2019
*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	float n,money;
	cin >> n >> money;
	vector<float> v;
	while(n--)
	{
		float x,y;
		cin >> x >> y;
		v.push_back(x/y);
	}
	float res = (*min_element(v.begin(),v.end()))*money;
	printf("%.8f",res);
	v.clear();
	return 0;
}
