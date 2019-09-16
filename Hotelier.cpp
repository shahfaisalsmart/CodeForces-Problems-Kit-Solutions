/*A. Hotelier
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Amugae has a hotel consisting of 10 rooms. The rooms are numbered from 0 to 9 from left to right.

The hotel has two entrances — one from the left end, and another from the right end. When a customer arrives to the hotel through the left entrance, they are assigned to an empty room closest to the left entrance. Similarly, when a customer arrives at the hotel through the right entrance, they are assigned to an empty room closest to the right entrance.

One day, Amugae lost the room assignment list. Thankfully Amugae's memory is perfect, and he remembers all of the customers: when a customer arrived, from which entrance, and when they left the hotel. Initially the hotel was empty. Write a program that recovers the room assignment list from Amugae's memory.

Input
The first line consists of an integer 𝑛 (1≤𝑛≤105), the number of events in Amugae's memory.

The second line consists of a string of length 𝑛 describing the events in chronological order. Each character represents:

'L': A customer arrives from the left entrance.
'R': A customer arrives from the right entrance.
'0', '1', ..., '9': The customer in room 𝑥 (0, 1, ..., 9 respectively) leaves.
It is guaranteed that there is at least one empty room when a customer arrives, and there is a customer in the room 𝑥 when 𝑥 (0, 1, ..., 9) is given. Also, all the rooms are initially empty.

Output
In the only line, output the hotel room's assignment status, from room 0 to room 9. Represent an empty room as '0', and an occupied room as '1', without spaces.

Examples
inputCopy
8
LLRL1RL1
outputCopy
1010000011
inputCopy
9
L0L0LLRR9
outputCopy
1100000010
Note
In the first example, hotel room's assignment status after each action is as follows.

First of all, all rooms are empty. Assignment status is 0000000000.
L: a customer arrives to the hotel through the left entrance. Assignment status is 1000000000.
L: one more customer from the left entrance. Assignment status is 1100000000.
R: one more customer from the right entrance. Assignment status is 1100000001.
L: one more customer from the left entrance. Assignment status is 1110000001.
1: the customer in room 1 leaves. Assignment status is 1010000001.
R: one more customer from the right entrance. Assignment status is 1010000011.
L: one more customer from the left entrance. Assignment status is 1110000011.
1: the customer in room 1 leaves. Assignment status is 1010000011.
So after all, hotel room's final assignment status is 1010000011.

In the second example, hotel room's assignment status after each action is as follows.

L: a customer arrives to the hotel through the left entrance. Assignment status is 1000000000.
0: the customer in room 0 leaves. Assignment status is 0000000000.
L: a customer arrives to the hotel through the left entrance. Assignment status is 1000000000 again.
0: the customer in room 0 leaves. Assignment status is 0000000000.
L: a customer arrives to the hotel through the left entrance. Assignment status is 1000000000.
L: one more customer from the left entrance. Assignment status is 1100000000.
R: one more customer from the right entrance. Assignment status is 1100000001.
R: one more customer from the right entrance. Assignment status is 1100000011.
9: the customer in room 9 leaves. Assignment status is 1100000010.
So after all, hotel room's final assignment status is 1100000010.

*/

// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
using namespace std;
main()
{
	long long n;
	cin>>n;
	string s;
	cin>>s;
	int a[10]={0};
	for(int i=0;i<n;i++)
	{
		if(s[i]=='L')
		{
			for(int j=0;j<10;j++)
			{
				if(a[j]==0)
				{
				a[j]=1;
				break;
				}
			}
		}
		else if(s[i]=='R')
		{
			for(int j=9;j>=0;j--)
			{
				if(a[j]==0)
				{
				a[j]=1;
				break;
				}
			}
		}
		else
		{
			int d;
			d=s[i]-'0';
			a[d]=0;
		}
	}
	for(int i=0;i<10;i++)
	cout<<a[i];
}
